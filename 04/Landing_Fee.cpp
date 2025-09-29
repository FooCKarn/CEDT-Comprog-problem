#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    map<string,int> fee;
    int sum = 0;
    vector<string> order;
    for(int i = 0;i<n;i++){
        string name;cin>>name;
        int val;cin>>val;
        fee[name] = val;
    }
    string str; getline(cin>>ws,str);
    int l = str.size();
    for(int i = 0;i<l;i++){
        if(str[i] == '-'){
            string tmp =str.substr(i+1,2);
            order.push_back(tmp);
        }
    }
    int s = order.size();
    for(int i = 1;i<s;i++){
        if(order[i]==order[i-1]) sum+=0;
        else sum+=fee[order[i]];
    }
    cout<<sum;
}