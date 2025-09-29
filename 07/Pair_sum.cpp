#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;cin>>k;
    set<int> s;
    int x;
    while(cin>>x){
        s.insert(x);
    }
    int cnt = 0;
    for(auto x:s){
        int tmp = k - x;
        if(tmp>x&&s.find(tmp)!=s.end()) cnt++;
    }
    cout<<cnt;
}