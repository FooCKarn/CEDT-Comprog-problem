#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,string> name;
    name["Robert"] = "Dick";
    name["William"] = "Bill";
    name["James"] = "Jim";
    name["John"] = "Jack";
    name["Margaret"] = "Peggy";
    name["Edward"] = "Ed";
    name["Sarah"] = "Sally";
    name["Andrew"] = "Andy";
    name["Anthony"] = "Tony";
    name["Deborah"] = "Debbie";
    name["Dick"] = "Robert";
    name["Bill"] = "William";
    name["Jim"] = "James";
    name["Jack"] = "John";
    name["Peggy"] = "Margaret";
    name["Ed"] = "Edward";
    name["Sally"] = "Sarah";
    name["Andy"] = "Andrew";
    name["Tony"] = "Anthony";
    name["Debbie"] = "Deborah";
    int n; cin>>n;
    string arr[n+10];
    for(int i = 1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i = 1;i<=n;i++){
        string key = arr[i];
        auto it = name.find(key);
        if(it != name.end()){
            cout<<name[key]<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }
    }
}