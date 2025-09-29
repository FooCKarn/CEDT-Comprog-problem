#include<bits/stdc++.h>
using namespace std;
int main(){
  int m; cin>>m;
  int arr[10000];
  int rz;
  int idx = 0;
  int cnt = 0;

  for(int i = 0;i<m;i++){
    for(int j = 0;j<m;j++){
        int k; cin>>k;
        if(k==0){
            rz = i ;
        }
        else{
            arr[idx]=k;
            idx++;
        }
    }
  }
  for(int i = 0;i<idx;i++){
    for(int j = i+1;j<idx;j++){
       if(arr[i]>arr[j]) cnt++; 
    }
  }
  bool ok;
  if (m % 2 == 1) {
    ok = (cnt % 2 == 0);
  } else {
    ok = ( ((cnt % 2) != (rz % 2)) == 1 );
  }

  cout << (ok ? "YES" : "NO");
}