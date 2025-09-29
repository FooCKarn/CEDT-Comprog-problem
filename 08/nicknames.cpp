#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,string> mp;
    while(n--){
        string s1,s2; cin>>s1>>s2;
        mp[s1]=s2;
        mp[s2]=s1;
    }
    int k;cin>>k;
    while(k--){
        string q;cin>>q;
        if(mp.find(q)!=mp.end()) cout<<mp[q]<<endl;
        else cout<<"Not found"<<endl;
    }
}