#include<bits/stdc++.h>
using namespace std;
multiset<char> Create_MS(string &str){
    multiset<char> tmp;
    for(auto c:str){
        if(!isspace(c)){
           tmp.insert(tolower(c));
        }
    }
    return tmp;
} 
int main(){
    string a;
    string b;
    getline(cin>>ws,a);
    getline(cin>>ws,b);
    multiset<char> m1 = Create_MS(a);
    multiset<char> m2 = Create_MS(b);
    if(m1==m2) cout<<"YES";
    else cout<<"NO";
}