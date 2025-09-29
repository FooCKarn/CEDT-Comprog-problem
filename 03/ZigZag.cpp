#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();
    int mn1=INT_MAX,mx1=INT_MIN,mn2=INT_MAX,mx2=INT_MIN;
    int a;
    int i = 1;
    int x,y;
    while(true){
        cin>>x;
        if(x==-998){
            cout<<mn1<<" "<<mx1;
            return 0;
        }
        if(x==-999){
            cout<<mn2<<" "<<mx2;
            return 0;
        }
        cin>>y;
        if(i%2==1){
            mn1 = min(mn1,x);
            mx1 = max(mx1,y);
            mn2 = min(mn2,y);
            mx2 = max(mx2,x);
        }
        else if(i%2==0){
            mn1 = min(mn1,y);
            mx1 = max(mx1,x);
            mn2 = min(mn2,x);
            mx2 = max(mx2,y);
        }
        i++;
    }
}
