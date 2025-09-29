#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> s;
    int x;
    int cnt = 0;
    bool flag = false;
    while(cin>>x){
        cnt++;
        if(s.count(x)){
            cout<<cnt;
            flag = true;
            break;
        }
        s.insert(x);
    }
    if(!flag) cout<<"-1";
}