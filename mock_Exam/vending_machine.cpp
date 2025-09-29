#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll k ;cin>>k;
    ll cnt = 0;
    string str;
    getline(cin>>ws,str);
    for(ll i = 0;i<str.size();i++){
        if(isalpha(str[i])){
            cnt += stoi(str.substr(i+1));
        }
    }
    cout<<k*cnt;

}