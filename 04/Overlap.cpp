#include<bits/stdc++.h>
using namespace std;
struct rec {
    int x1,y1,x2,y2;
};
int main(){
    int mx = 0;
    int n;cin>>n;
    vector<pair<int,int>> ans;
    rec arr[100000];
    for(int i = 1;i<=n;i++){
        cin>>arr[i].x1>>arr[i].y1>>arr[i].x2>>arr[i].y2;
    }

    for(int i =1;i<=n;i++){
        for(int j = i+1;j<=n;j++){
            int w = max(0, min(arr[i].x2, arr[j].x2) - max(arr[i].x1, arr[j].x1));
            int h = max(0, min(arr[i].y2, arr[j].y2) - max(arr[i].y1, arr[j].y1));
            int area = w*h;
            if (area > mx) {
                mx = area;
                ans.clear();
                if (area > 0) ans.push_back({i,j});
            } else if (area == mx && area > 0) {
                ans.push_back({i,j});
            }
        }
    }
    if(mx == 0){
        cout<<"No overlaps"; return 0;
    }
    cout<<"Max overlapping area = "<<mx<<endl;

    for(auto x : ans){
        cout<<"rectangles "<<x.first-1<<" and "<<x.second-1<<endl;
    }

}