#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    string ans1[] = {"positive","negative","zero"};
    string ans2[] = {"odd","even"};
    int chk1 = 2; 
    int chk2 = abs(n)%2==0? 1:0;
    if(n!=0){
        chk1 = n>0? 0:1 ;
    }
   
    cout<<ans1[chk1]<<"\n"<<ans2[chk2];
}