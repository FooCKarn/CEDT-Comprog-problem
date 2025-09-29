#include<bits/stdc++.h>
using namespace std;
int main(){
    double x;cin>>x;
    double y = pow(x,sqrt(log((x+1)*(x+1))))/(10-x);
    cout<<round(y*1e6)/1e6;
}