#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    double p1 = 1.0;
    double p2 = 0.0;
    double q1 = 0.0;
    double q2 = 1.0;
    for(int i = 0;i<n;i++){
        double p = arr[i] * p1 + p2;
        double q = arr[i] * q1 + q2;
        double ans = p/q;
        cout<<setprecision(10)<<ans<<endl;
        p2 = p1; p1 = p;
        q2 = q1; q1 = q;
    }

}