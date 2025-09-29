#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int col = n;
   for(int i = 0;i<n;i++){
        for(int j =1;j<=col;j++){
            if(i == n-1 ) cout<<'*';
            else if(j== n - i) cout <<'*';
            else if(j== n + i) cout <<'*';
            else cout<<'.';
     }
     col++;
     cout<<endl;
   }
}