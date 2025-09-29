#include<bits/stdc++.h>
using namespace std;
int main(){
   string str;cin>>str;
   string ans="";
   int l = str.length();
   int i = 1;
   int cnt = 1;
   char tmp = str[0];
   if(l==1){
    cout<<str<<" 1";
    return 0;
   }
   while(i<l){
        if(i == l-1){
            if(str[i]==tmp){
                ans += str[i-1] ;
                ans += " ";
                ans += to_string(cnt+1); 
                ans += " ";
                break;   
            }
            else {
                ans += str[i-1] ;
                ans += " ";
                ans += to_string(cnt) ; 
                ans += " ";
                ans += str[i] ;
                ans += " ";
                ans += to_string(1); 
                ans += " ";
                break;
            }
        }
        if(str[i]==tmp){
             cnt ++;
        }
        else if(str[i]!=tmp){
            ans += str[i-1] ;
            ans += " ";
            ans += to_string(cnt);
            ans += " ";
            cnt = 1;
            tmp = str[i];
        }
        i++;
   }

   cout<<ans;
}