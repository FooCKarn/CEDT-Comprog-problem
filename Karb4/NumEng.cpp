#include<bits/stdc++.h>
using namespace std;
int main(){
   string digit[]= {"","one","two","three","four","five","six","seven","eight","nine"};
   string ten1[] = {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
   string ten2[] = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
   string word[] = {"","thousand","million","billion","trillion"};
   string str; 
   cin>>str;
   string ans = "";
   if(str == "0"){
    cout<<"zero";
    return 0;
   }
   int l = str.size();
   int col = (l-1)/3;
   if(l%3!=0){
      int r = l%3;
      string tmp = str.substr(0,r);
      int k = stoi(tmp);
      if(k>=10&&k<20){
         ans += ten1[k%10];
         ans += " ";
         k = 0;
      }
      else if(k>=20){
         ans += ten2[k/10];
         ans += " ";
      }
      k%=10;
      ans+=digit[k];
      str.erase(0,r);
      ans += " ";
      ans += word[col];
      col = (col>0)? col-1:0;
      ans += " ";
   }
   if(str.empty()||str.size()==0){
      cout<<ans;
      return 0;
   }

   while(!str.empty()){
      string tmp = str.substr(0,3);
      int k = stoi(tmp);
      if(k==0){
         col = (col>0)? col-1:0;
         str.erase(0,3);
         continue;
      }
      if(k>=100){
         ans += digit[k/100];
         ans += " hundred ";
      }
      k%=100;
      if(k>=10&&k<20){
         ans += ten1[k%10];
         ans += " ";
         k = 0;
      }
      else if(k>=20){
         ans += ten2[k/10];
         ans += " ";
      }
      k%=10;
      ans += digit[k];
      ans += " ";
      ans += word[col];
      ans += " ";
      col = (col>0)? col-1:0;
      str.erase(0,3);
   }
   cout<<ans;
}