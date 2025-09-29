#include <bits/stdc++.h>
using namespace std;

int main() {
   string win,lose;
   set<string> allTeam;
   set<string> loseTeam;
   while(cin>>win>>lose){
    allTeam.insert(win);
    allTeam.insert(lose);
    loseTeam.insert(lose);
   }
   vector<string> vec;
   for(auto &team :allTeam){
        if(loseTeam.find(team)==loseTeam.end()){
            vec.push_back(team);
        }
   }
   if(vec.empty()){
        cout<<"None";
        return 0;
   }
   sort(vec.begin(),vec.end());
   for(auto x:vec) cout<<x<<" ";
}
