#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin>>n>>k;
    int arr[n];
    int sum = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int r = sum - k;
    bool c = false;
    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(arr[i]+arr[j]==r){
                cout<<i<<" "<<arr[i]<<endl;
                cout<<j<<" "<<arr[j];
                c = true;
                break;
            }
        }
        if(c) break;
    }
}