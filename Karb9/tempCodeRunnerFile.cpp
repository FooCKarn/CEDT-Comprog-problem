#include<bits/stdc++.h>
using namespace std;
int st,en;
vector<pair<int,int>> warp;
bool findHead(int room){
    if(room == en) return true;
    for(auto x:warp){
        if(x.first == room){
            findHead(x.second);
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n>>st>>en;
    for(int i =0;i<n;i++){
        int a,b;cin>>a>>b;
        warp.push_back({a,b});
    }
    if(findHead(st)) cout<<"yes";
    else cout<<"no";
}