#include<bits/stdc++.h>
using namespace std;
struct elev{
    int id; int cur; int dst;
};
int cal(int cur,int dst,int st,int en){
    if(cur == dst) return abs(cur-st) + abs(en-st);

    int lower = min(cur,dst);
    int upper = max(cur,dst);
    bool direction = (cur>dst)? 0:1;
    int finish = (direction==1)? upper:lower;
    if(st>=lower&&st<=upper){
        if((direction == 1 && en<=upper && en>=st) || (direction == 0 && en>=lower && en<=st)) return 0;
        else return abs(en - finish);
    }
    else {
        return abs(st - finish) + abs(en - st);
    }

}
int main(){
    vector<elev> lift;
    vector<int> ans;
    int n;cin>>n;
    for(int i = 0;i<n;i++){
        int id,cur,dst; cin>>id>>cur>>dst;
        lift.push_back({id,cur,dst});
    }
    int q;cin>>q;
    while(q--){
        int st,en;cin>>st>>en;
        int best_point = INT_MAX , Id = INT_MAX;
        for(auto x : lift) {
            int point = cal(x.cur,x.dst,st,en);
            if(point < best_point||(point == best_point && x.id<Id)){
                best_point = point;
                Id = x.id;
            }
        }
        ans.push_back(Id);
    }
    for(auto x:ans) cout<<">> "<<x<<endl;
    

}