#include<bits/stdc++.h>
using namespace std;
int main(){
string str1,str2;
  getline(cin>>ws,str1);
  getline(cin>>ws,str2);
  int l1 = str1.size();
  int l2 = str2.size();
  int cnt = 0;
  for(int i = 0;i<l2;i++){
   if(!((str2[i-1]>='A'&&str2[i-1]<='Z') || (str2[i-1]>='a'&&str2[i-1]<='z')) && 
      !((str2[i+l1]>='A'&&str2[i+l1]<='Z') || (str2[i+l1]>='a'&&str2[i+l1]<='z')))
   
   
   {
    string tmp = str2.substr(i,l1);
    if(tmp==str1) cnt++;
  }
}
  cout<<cnt;
}