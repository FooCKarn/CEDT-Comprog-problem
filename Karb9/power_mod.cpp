#include<bits/stdc++.h>
using namespace std;
int powermod(int a,int k,int m){
    if(k==0) return 1;
    int half = powermod(a,k/2,m);
    int ans = (half*half)%m;
    if(k%2==1){
        ans = (a*ans)%m;
    }
    return ans;
}
int main(){
    int a,k,m;cin>>a>>k>>m;
    cout<<powermod(a,k,m);
}