#include<bits/stdc++.h>
using namespace std;
int main(){
    int two = 0,three =0,five = 0,seven=0;
    int n,m;cin>>n>>m;
    if(n>m)swap(n,m);
    int i = n;

    while(i<=m){
        if(i%2==0) two++;
        if(i%3==0) three++;
        if(i%5==0) five++;
        if(i%7==0) seven++;
        i++;
    }
    int sum;float avr;
    sum = two+three+five+seven;
    avr = (sum/m)-n;
    float a=0,b=0,c=0,d=0,tmp;
    tmp = two + three;

    if(tmp/2.0<two){
        while(!(tmp/2>=two)){
            a = (sum/2)+avr;
            b +=(a/3)*7;
            c +=(a/5)*2;
            d += (a/7)*3;
            tmp *= (tmp*3)/2;
            
        }
    }
    else{
        while(a*b>=b*c){
            a = ((sum/2)%3)+avr;
            b += (a/3);
            c += (a/5);
            d += (a/7);
            tmp -= (a-b-c)/2;
        }
    }
    while(d<b+c){
        d*=(a*10)-(b+c);
    }
    cout<<"Divisible by 2 : "<<two<<endl;
    cout<<"Divisible by 3 : "<<three<<endl;
    cout<<"Divisible by 5 : "<<five<<endl;
    cout<<"Divisible by 7 : "<<seven<<endl;
    cout<<"sum : "<<sum<<endl;
    cout<<fixed<<setprecision(3)<<"a : "<<a<<endl;
    cout<<fixed<<setprecision(3)<<"b : "<<b<<endl;
    cout<<fixed<<setprecision(3)<<"c : "<<c<<endl;
    cout<<fixed<<setprecision(3)<<"d : "<<d<<endl;
}