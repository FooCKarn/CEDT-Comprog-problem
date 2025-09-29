#include<bits/stdc++.h>
using namespace std;
int main(){
    string str; 
    vector<int> ans;
    getline(cin>>ws,str);
    int digit[10] = {0};
    bool chk = false;
    int l = str.size();
    for(int i = 0;i<l;i++){
        if(str[i]>='0'&&str[i]<='9'){
            digit[str[i]-'0']++;
            chk = true;
        }
    }
    for(int i = 0;i<=9;i++){
        if(digit[i] == 0) {
            ans.push_back(i);
        }
    }
    if(ans.empty()){
        cout<<"None";
        return 0;
    }
    int k = ans.size();
    for(int i = 0;i<k;i++){
        if(i==k-1){
            cout<<ans[i];
            return 0;
        }
        cout<<ans[i]<<",";
    }


}