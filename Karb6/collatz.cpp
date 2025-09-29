#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v;
    v.push_back(n);
    while(n!=1){
        if(n%2==0) n/=2;
        else n = (n*3)+1;
        v.push_back(n);
    }
    int k = v.size();
    int i = (k<=15)? 0:k-15;
    bool p = true;

    while(i<k){
        if(p){
            cout<<v[i];
            p = false;
        }
        else{
            cout<<"->"<<v[i];
        }
        i++;
    } 

}