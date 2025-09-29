#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    string ans = "0";
    while(cin>>str&&str!="END"){
        reverse(str.begin(),str.end());
        int i = 0,j=0;
        int carry = 0;
        string tmp = "";
        while(i<str.size()||j<ans.size()||carry){
            int digit1 = (i<str.size())? str[i]-'0':0;
            int digit2 = (j<ans.size())? ans[i]-'0':0;
            int sum = digit1 + digit2 + carry;
            carry = sum/10;
            tmp+=to_string(sum%10);
            i++;j++;
        }
        ans = tmp;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
}
