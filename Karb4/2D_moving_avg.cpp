#include<bits/stdc++.h>
using namespace std ;
int main(){
    int r,c;
    cin>>r>>c;
    double arr[r+10][c+10];
    for(int i = 1;i<=r;i++){
        for(int j = 1;j<=c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 2;i<=r-1;i++){
        for(int j = 2;j<=c-1;j++){
            double sum = arr[i][j] + arr[i-1][j-1] + arr[i-1][j] + arr[i-1][j+1] + arr[i][j-1] + arr[i][j+1] + arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1];
            double avg = sum/9;
            cout<<round(avg*100)/100.0<<" ";
        }
        cout<<endl; 
    }




}