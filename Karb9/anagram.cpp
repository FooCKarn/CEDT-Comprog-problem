#include<bits/stdc++.h>
using namespace std;
set<string>ans ;
bool chk[100];
void recur(string& s,string cur){
    if(cur.size()==s.size()) {
        ans.insert(cur);
        return ;
    }
    for(int i = 0;i<s.size();i++){
        if(!chk[i]){
            chk[i] = true;
            recur(s,cur+s[i]);
            chk[i] = false;
        }
    }
}
int main(){
    string s;cin>>s;
    recur(s,"");
    for(auto x:ans) cout<<x<<" ";
}