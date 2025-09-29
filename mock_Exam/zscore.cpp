#include<bits/stdc++.h>
using namespace std;
int main(){
    double z,avg,sd;
    cin>>z;
    double sum1 = 0;
    double sum2 = 0;
    int i = 0;
    while(true){
        int a;cin>>a;
        if(a ==-1) break;
        i++;
        sum1 += a;
        sum2 += (a*a);
    }
    avg = sum1/i;
    sd = sqrt((sum2/i)-(avg*avg));
    cout<<fixed<<setprecision(5)<< (z*sd) + avg;
}