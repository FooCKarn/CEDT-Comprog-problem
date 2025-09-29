#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int d,m,y;cin>>d>>m>>y;
    int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int yc = y - 543; 
    if(yc % 400 == 0 ||(yc%4==0&&yc%100!=0)){ 
        month[2] = 29;}
    
    d += 15;
    if(d<=month[m]){

        cout<<d<<"/"<<m<<"/"<<y;
        return 0;
    }

    else if(d>month[m]){
        d -= month[m];
        m++;
        if(m>12){
            y++;
            m = 1;
        }
        cout<<d<<"/"<<m<<"/"<<y;
    }

}