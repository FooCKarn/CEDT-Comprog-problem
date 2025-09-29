#include<bits/stdc++.h>
using namespace std;
string upgrade(string k){
    if(k=="F") return "D";
    else if(k=="D") return "D+";
    else if(k=="D+") return "C";
    else if(k=="C") return "C+";
    else if(k=="C+") return "B";
    else if(k=="B") return "B+";
    else return "A";
}
int main(){
    vector<pair<string,string>> vec;
   while (true) {
    string id;
    cin >> id;
    if (id == "q") break; 
    string grade;
    cin >> grade;
    vec.push_back({id, grade});
}

    string o;
    while(cin>>o){
        for(int i =0;i<vec.size();i++){
            if(o==vec[i].first){
                vec[i].second = upgrade(vec[i].second);
            }
        }
    }
    for(auto x:vec){
        cout<<x.first<<" "<<x.second<<endl;
    }
}