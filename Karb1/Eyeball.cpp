#include<bits/stdc++.h>
using namespace std;
double xp,yp;
int main(){
    double xe,ye,re,rp,xm,ym;
    cin>>xe>>ye>>re>>rp>>xm>>ym;
    float dx , dy;
    dx = xm - xe;
    dy = ym - ye;
    double d = sqrt((dx*dx)+(dy*dy));
    xp = xe+(re-rp)*dx/d;
    yp = ye+(re-rp)*dy/d;
    cout<<round(xp)<<" "<<round(yp);
}