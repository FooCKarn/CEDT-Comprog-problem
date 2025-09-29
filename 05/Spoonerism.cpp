#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin>>ws,str);
    vector<string> vec;
    int idx = 0;
    while(!str.empty()){
        idx++;
        if(idx >= (int)str.size()){           
            vec.push_back(str);
            break;
        }
        if(str[idx]==' '){
            vec.push_back(str.substr(0,idx));
            str.erase(0,idx+1);
            idx = 0;
        }
    }
    int i = 0;
    int j = (int)vec.size()-1;
    string a = vec[i];
    string b = vec[j];
    string tmp1;
    string tmp2;
    int idx1 = 0;
    int idx2 = 0;

    while(true){
        if(idx1 >= (int)a.size()) break;      
        char t = a[idx1];
        if(t=='a' || t== 'e'|| t=='i'||t=='o'||t=='u') break;
        idx1++;
    }
    while(true){
        if(idx2 >= (int)b.size()) break;      
        char t = b[idx2];
        if(t=='a' || t== 'e'|| t=='i'||t=='o'||t=='u') break;
        idx2++;
    }

    tmp1 = a.substr(0,idx1) + b.substr(idx2,b.size());
    tmp2 = b.substr(0,idx2) + a.substr(idx1,a.size());
    vec[i] = tmp1;
    vec[j] = tmp2;
    for(auto x:vec) cout<<x<<" ";
}
