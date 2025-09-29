#include<bits/stdc++.h>
using namespace std;
int main(){
   set<string> ans;
   map<string,vector<string>> mp;
   string s1,s2;
   int test = 9;
   string k;
   while (cin >> s1) {
       if (!(cin >> s2)) { 
           mp[s1].push_back(s1)ว
           k = s1;
           break;
       }
    mp[s1].push_back(s2);
    mp[s1].push_back(s1);
    mp[s2].push_back(s1);
    mp[s2].push_back(s2);
   }
   
   vector<string> vec;
   for(auto x:mp[k]){
        ans.insert(x);
        vec.push_back(x);
   }
   for(auto key : vec){
    for(auto x : mp[key]){
        ans.insert(x);
    }
   }
   for(auto x:ans) cout<<x<<endl;
}
