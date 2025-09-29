#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int k;cin>>k;
    if(k<=100){
        cout<<"18";
    }
    else if(k<=250){
        cout<<"22";
    }
    else if(k<=500){
        cout<<"28";
    }
    else if(k<=1000){
        cout<<"38";
    }
    else if(k<=2000){
        cout<<"58";
    }
    else {
        cout<<"Reject";
    }
}