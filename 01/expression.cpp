#include<bits/stdc++.h>
using namespace std;
int main(){
   float pi = M_PI;
   float fac = 3628800/pow(8,8);
   float harn = pow(1.2,cbrt(2.3));
   float lg = log(9.7);
   float k = pow(lg,(7/sqrt(71)-sin((40*pi)/180)));
   cout<< (pi-fac+k)/harn;
}