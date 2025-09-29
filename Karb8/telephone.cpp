#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,string> mp;
    while(n--){
        string s1,s2,s3; cin>>s1>>s2>>s3;
        s1+=" ";
        s1+=s2;
        mp[s1]=s3;
        mp[s3]=s1;
    }
    int k;cin>>k;
    while(k--){
        string q;getline(cin>>ws,q);
        if(mp.find(q)!=mp.end()) cout<<q<<" --> "<<mp[q]<<endl;
        else cout<<q<<" --> "<<"Not found"<<endl;
    }
}