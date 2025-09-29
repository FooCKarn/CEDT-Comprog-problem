#include<bits/stdc++.h>
using namespace std;
int main(){
    int y1;cin>>y1;
    int y2 = y1 - 543;
    int y = y2%100;
    int k = (y+11+(y/4))%7;
    cout<<k;
}