#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,vector<string>> id_list;
    map<string,vector<string>> city_list;
    vector<string> order;

    int n;
    cin>>n;
    for(int i = 1 ;i<= n;i++){
        string id;cin>>id;
        order.push_back(id); 
        string ct;
        while(cin>>ct && ct!="*"){
            id_list[id].push_back(ct);
            city_list[ct].push_back(id);
        }
    }

    string k;
    cin>>k;

    set<string> related;
    for(auto city:id_list[k]){ 
        for(auto id:city_list[city]){ 
            if(id!=k) related.insert(id);
        }
    }

    if(related.empty()){
        cout<<">> Not Found";
        return 0;
    }

    for(auto id:order){
        if(related.count(id)){
            cout<<">> "<<id<<endl;
        }
    }
}
