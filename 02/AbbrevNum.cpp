#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double n;cin>>n;
    if(n<1000){
        cout<<n;
    }
    else if(n<10000){
        n/=1000;
        cout<<round(n*10.0)/10.0<<"K";
    }
    else if(n<1000000){
        n/=1000;
        cout<<round(n)<<"K";
    }
    else if(n<10000000){
         n/=1000000;
        cout<<round(n*10.0)/10.0<<"M";
    }
    else if(n<1000000000){
        n/=1000000;
        cout<<round(n)<<"M";
    }
    else if(n<10000000000){
        n/=1000000000;
        cout<<round(n*10.0)/10.0<<"B";
    }
    else{
         n/=1000000000;
         cout<<round(n)<<"B";
    }
}