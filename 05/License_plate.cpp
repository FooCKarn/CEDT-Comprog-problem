#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    string ans ="";
    getline(cin>>ws,str);
    int m; cin>>m;
    int k = stoi(str.substr(4,3));
    //cout<<k;
    int sum = k + m;
    int carry = sum / 1000;
    ans += "-";
    sum %= 1000;

    if(sum>=10&&sum<100) {
        ans += "0";}
    else if(sum<10){
        ans += "00";
    }
    ans += to_string(sum);
    
    char a = str[0];
    char b = str[1];
    char c = str[2];
    while(carry--){
        c++;
        if(c>'Z'){
            b++;
            c = 'A';
        }
        if(b>'Z'){
           a++;
           b = 'A';
        }
    }
    cout<<a<<b<<c<<ans;
    

}