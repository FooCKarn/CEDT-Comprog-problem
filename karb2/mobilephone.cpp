#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str; cin>>str;
    string tmp = str.substr(0,2);
    if((tmp=="06"||tmp=="09"||tmp=="08")&&str.size()==10){
        cout<<"Mobile number";
    }
    else {
        cout<<"Not a mobile number";
    }
}