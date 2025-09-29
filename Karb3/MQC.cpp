#include<bits/stdc++.h>
using namespace std;
int main(){
  string str1,str2;
  getline(cin>>ws,str1);
  getline(cin>>ws,str2);

  int l1 = str1.size();
  int l2 = str2.size();
  int cnt = 0;
  if(l1 != l2){
    cout<<"Incomplete answer";
    return 0;
  }
  for(int i=0;i<l1;i++){
    if(str1[i]==str2[i]) cnt++;
  }
  cout<<cnt;
}