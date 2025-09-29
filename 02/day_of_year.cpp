#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int d,m,y;cin>>d>>m>>y;
    int yc = y -543;
    int month[13] = {0,31,59,90,120,151,181,212,243,273,304,334,365};
    int month1[13] = {0,31,60,91,121,152,182,213,244,274,305,335,366};
    int ans;
    if(yc % 400 == 0 ||(yc%4==0&&yc%100!=0)){ 
        ans = month1[m-1] + d;
        cout<<ans;
    }
    else{
        ans = month[m-1] + d;
        cout<<ans;
    }
}