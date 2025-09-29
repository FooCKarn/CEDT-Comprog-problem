#include<bits/stdc++.h>
using namespace std;
int main(){
    float p;cin>>p;
    int k=1;
    float t=1;
    while(true){
        t = (t * (365-(k-1)))/365;
        if(1-t>=p){
            cout<<k;
            return 0;
        }
        else {
            k++;
        }
    }
}