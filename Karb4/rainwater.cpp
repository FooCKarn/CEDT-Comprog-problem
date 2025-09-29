#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int  arr[n+100];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int l = 0,r = n-1;
    int lm = arr[0]; int rm = arr[n-1];
    int water = 0;
    while(l<r){
        if(lm<=rm){
            l++;
            lm = max(arr[l],lm);
            water += lm - arr[l];
        }
        else{
            r--;
            rm = max(rm,arr[r]);
            water+= rm -arr[r];

        }
    }
    cout<<water;

}