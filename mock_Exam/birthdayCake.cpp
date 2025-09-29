#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;cin>>n>>k;
    vector<int> arr(n+10);
    vector<int> qs(n+10,0);
    for(int i=1;i<=n;i++) cin>>arr[i];
    for(int i=1;i<=n;i++) qs[i] = qs[i-1] + arr[i];
    int bestSum = INT_MIN;
    int bestl = 1,bestr=0;
    int bestlen = 0;
    for(int l=1;l<=n;l++){
        int bottom = arr[l];
        int maxR = min(n,l+k-1);
        for(int r=l;r<=maxR;r++){
            if(arr[r]>bottom) break;

            int sum = qs[r] - qs[l-1];
            int len = r-l+1;
            bool better = false;
            if (sum > bestSum) better = true;
            else if (sum == bestSum) {
                if (len > bestlen) better = true;
                else if (len == bestlen && bestlen > 0) {
                    int i = 0;
                    while (i < len && arr[l + i] == arr[bestl + i]) i++;
                    if (i < len && arr[l + i] > arr[bestl + i]) better = true;
                }
            }

            if (better) {
                bestSum = sum;
                bestlen = len;
                bestl = l;
                bestr = r;
            }
        }
    }
    cout << bestSum << "\n";
    for (int i = bestl; i <= bestr; ++i) {
        if (i > bestl) cout << ' ';
        cout << arr[i];
    }
    cout << "\n";
}