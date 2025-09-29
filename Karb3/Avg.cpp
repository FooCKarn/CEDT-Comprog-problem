#include<bits/stdc++.h>
using namespace std;
int main(){
    double sum = 0;
    int n = 0;
    double a;
    while(true){
        cin>>a;
        if(a==-1) break;
        sum+=a;
        n++;
    }
    if(n==0){
        cout<<"No Data";
        return 0;
    }
    cout<<round((sum/n)*100)/100;

}