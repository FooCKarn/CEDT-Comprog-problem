#include<bits/stdc++.h>
using namespace std;
int main(){
    string str; cin>>str;
    str  = str + "$";
    int  l =str.size();
    vector<string> vec;
    vec.push_back(str);
    for(int i = 0;i<l-1;i++){
        string tmp = vec[i];
        char c = tmp[0];
        tmp += c;
        tmp.erase(0,1);
       // cout<<tmp<<endl;
        vec.push_back(tmp);
    }
    //for(auto x:vec) cout<<x<<endl;
    sort(vec.begin(),vec.end());
    //for(auto x:vec) cout<<x<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i][l-1];
    }
    //cout<<vec[0];
}