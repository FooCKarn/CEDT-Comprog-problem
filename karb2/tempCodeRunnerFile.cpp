#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int d1,m1,y1;
    int d2,m2,y2;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    int month[13] = {0,31,59,90,120,151,181,212,243,273,304,334,365};
    int month1[13] = {0,31,60,91,121,152,182,213,244,274,305,335,366};

    int sum=0;
    int yc1 = y1-543;
    int yc2 = y2-543;
    //cal day of 1st year
    if(yc1 % 400 == 0 ||(yc1%4==0&&yc1%100!=0)){ 
        sum += 366 - month1[m1-1] - d1;
        cout<<"h"<<endl;
    }
    else{
        sum += 365 - month[m1-1] - d1;
    }
    //cal year
    y1++;
    sum += ((y2-y1)*365);
    //last year
    if(yc2 % 400 == 0 ||(yc2%2==0&&yc2%100!=0)){ 
        sum += month1[m2-1] + d2-1;
        cout<<"h"<<endl;
    }
    else{
        sum+= month[m2-1] + d2-1;
    }
    double pi = M_PI;
    double a = sin((2*pi*sum)/23);
    double b = sin((2*pi*sum)/28);
    double c = sin((2*pi*sum)/33);

    cout<<sum<<" "<<round(a*100.0)/100.0<<" "<<round(b*100.0)/100.0<<" "<<round(c*100.0)/100.0;
    //23 9 2503 15 5 2533
}