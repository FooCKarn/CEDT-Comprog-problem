#include <iostream>
#include <vector>
using namespace std;
vector<string> split(string line, char delimiter) { 
    vector<string> vec;
    int l = line.size();
    bool flag = false;
    int st = 0;
    for(int i = 0;i<l;i++){
        char c = line[i];
        if(c!=delimiter&&!flag){
            st = i;
            flag = true;
        }
        else if(c == delimiter&&flag){
            string tmp = line.substr(st,i-st);
            vec.push_back(tmp);
            flag = false;
        }
        if(i==l-1&&c!=delimiter){
            string tmp = line.substr(st,i-st+1);
            vec.push_back(tmp);
        }

    }
    //for(auto x:vec) cout<<x<<' ';
    cout<<endl;
    return vec;
}
int main() {
     string line;
     getline(cin, line);
    string delim;
     getline(cin, delim);
     for (string e : split(line, delim[0])) {
     cout << '(' << e << ')';
 }
}