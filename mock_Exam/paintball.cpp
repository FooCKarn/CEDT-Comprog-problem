#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int k;
    int row,col;
    cin>>row>>col>>k;
    char arr[550][550];
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j] = '-';
        }
    }
    while(k--){
        char c;int r;int x,y;
        cin>>c>>r>>x>>y;
        for(int i = x-r;i<=x+r;i++){
            for(int j = y-r;j<=y+r;j++){
                if(i<0||j<0||x>row||j>col) continue;
                if(abs(i-x)+abs(j-y)<=r) arr[i][j] = c;
            }
        }
    }
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}