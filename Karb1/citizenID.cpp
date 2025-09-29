#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int cal = 0;
    cin>>str;
    for(int i = 0;i<12;i++){
        cal += (13-i)*(str[i]-'0');
    }
    cal %= 11;
    int last = (11 - cal)%10;
    cout<<str[0]<<"-"<<str.substr(1,4)<<"-"<<str.substr(5,5)<<"-"<<str.substr(10,2)<<"-"<<last;
}