#include<bits/stdc++.h>
using namespace std;
int st,en;
vector<pair<int,int>> warp;
set<vector<int>> allPath;
void findHead(int room,vector<int> path){
    path.push_back(room);
    if(room == en) {
        allPath.insert(path);
        return ;
    }
    for(auto x:warp){
        if(x.first == room){
            findHead(x.second,path);
        }
    }
}
int main(){
    int n;
    cin>>n>>st>>en;
    for(int i =0;i<n;i++){
        int a,b;cin>>a>>b;
        warp.push_back({a,b});
    }
    vector<int> startPath;
    findHead(st,startPath);
    if(!allPath.empty()){
        for (auto path : allPath) {
            for (int i = 0; i < path.size(); i++) {
                if (i) cout << " -> ";
                cout << path[i];
            }
            cout << "\n";
        }
    } 
    else cout<<"no";
}