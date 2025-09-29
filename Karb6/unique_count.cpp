#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin>>ws,str);
    string tmp = "";
    bool arr[1000000] = {false};
    vector<int> ans;
    int cnt = 0;
    for (char c : str) {
        if (c == ' ') {
            if (!tmp.empty()) {
                int num = stoi(tmp);
                if(arr[num]==false){
                    arr[num] = true;
                    cnt++;
                    ans.push_back(num);
                }
                tmp.clear();
            }
        } else {
            tmp += c;
        }
    }

    if (!tmp.empty()) { 
        int num = stoi(tmp);
        if(arr[num]==false){
                arr[num] = true;
                cnt++;
                ans.push_back(num);
         }
    }
    cout<<cnt<<endl;
    sort(ans.begin(),ans.end());
    int n = (ans.size()>10)? 10:ans.size();
    for(int i = 0;i < n;i++){
        cout<<ans[i]<<' ';
    }
    
}