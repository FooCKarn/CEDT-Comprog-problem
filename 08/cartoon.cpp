#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,vector<string>> mp;
    vector<string> order;
    string name,type;
    while(cin >> name >> type){
        if(mp.find(type) == mp.end()){   
            order.push_back(type);
        }
        mp[type].push_back(name);        
    }
    for(string t : order){
        cout << t << ": ";
        for(int i = 0; i < mp[t].size(); i++){
            if(i > 0) cout << " ";
            cout << mp[t][i];
        }
        cout << "\n";
    }
}
