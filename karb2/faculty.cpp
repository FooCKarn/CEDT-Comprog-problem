#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a;cin>>a;
    if(a == "01" || a == "31" ||
       a == "02" || a == "32" ||
       a == "20" || a == "33" ||
       a == "21" || a == "34" ||
       a == "22" || a == "35" ||
       a == "23" || a == "36" ||
       a == "24" || a == "37" ||
       a == "25" || a == "38" ||
       a == "26" || a == "39" ||
       a == "27" || a == "40" ||
       a == "29" || a == "51" ||
       a == "30" || a == "53" || a == "53" || a == "55" ||
       a == "58" 
    ){
        cout<<"OK";
    }
    else{
        cout<<"Error";
    }
}