#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int ans = 0;
    vector<int> v(n);
    for(int i = 0;i<n;i++) cin>>v[i];

    for(int l = 0;l<n;l++){
        vector<int> chk(n+5,0);
        int mx = 0,cnt = 0;
        for(int r=l;r<n;r++){
            int k = v[r];
            if(k<1||k>n) break;
            if(chk[k]==1) break;
            
            chk[k] = 1;
            mx = max(mx,k);
            cnt++;
            int len = r-l+1;
            if(mx == len && cnt == len) ans++;
        }
    }
    cout<<ans;
}