#include <bits/stdc++.h>
using namespace std;
map<string,int> digit = {
    {"soon",0},{"neung",1},{"song",2},{"sam",3},{"si",4},
    {"ha",5},{"hok",6},{"chet",7},{"paet",8},{"kao",9},
    {"et",1},{"yi",2}
};
map<string,int> unit = {
    {"sip",10},{"roi",100},{"phan",1000},
    {"muen",10000},{"saen",100000},{"lan",1000000}
};
int convert(vector<string> words){
    long long total = 0;  
    long long current = 0; 
    for (int i=0;i<words.size();i++){
        string w = words[i];
        if (digit.count(w)){ 
            current += digit[w];
        }
        else if (unit.count(w)){ 
            if (current==0 && w=="sip") current = 1; 
            current *= unit[w];
            if (w=="lan"){
                total += current;
                current = 0;
            }
        }
    }
    return total + current;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string line;
    while (true){
        getline(cin,line);
        if (line=="q") break; 
        stringstream ss(line);
        vector<string> words;
        string w;
        while (ss>>w) words.push_back(w);
        cout << convert(words) << "\n";
    }
}
