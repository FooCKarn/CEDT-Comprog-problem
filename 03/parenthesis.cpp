#include<bits/stdc++.h>
using namespace std;
int main(){
  string str;
  getline(cin>>ws,str);
  int l = str.size();
  for(int i = 0;i<l;i++){
    char tmp = str[i];
    if(tmp == '[') str[i] = '(';
    else if(tmp == ']') str[i] = ')';
    else if(tmp == '(') str[i] = '[';
    else if(tmp == ')') str[i] = ']';
  }
  cout<<str;
}