#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v;
    bool flag = false;
    while(n--){
        int a;cin>>a;
        if(flag == false) v.push_back(a); 
        else v.insert(v.begin(),a);

        flag = !flag;

    }
    string str;
    getline(cin>>ws,str);
    if(str == "-1"){
        cout<<"[";
        for(int i = 0;i<v.size();i++){
        if(i==v.size()-1) cout<<v[i];
        else cout<<v[i]<<", ";
    }
    cout<<"]";
    return 0;
    }
    int idx = 0;
    str.push_back(' ');
    if(!str.empty()){
        str.push_back(' '); 
        while(idx < (int)str.size()){
            if(str[idx]==' '){
                if(idx > 0){ 
                    int a = stoi(str.substr(0,idx));
                    if(flag == false) v.push_back(a); 
                    else v.insert(v.begin(),a);
                    flag = !flag;
                }
                str.erase(0,idx+1);
                idx = 0;
            } else {
                idx++;
            }
        }
    }
    int k;
    while(cin>>k){
        if(k==-1)break;
        int a = k;
        if(flag == false) v.push_back(a); 
        else v.insert(v.begin(),a);
        flag = !flag;
    }
    cout<<"[";
    for(int i = 0;i<v.size();i++){
        if(i==v.size()-1) cout<<v[i];
        else cout<<v[i]<<", ";
    }
    cout<<"]";


}