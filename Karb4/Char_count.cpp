#include<bits/stdc++.h>
using namespace std;
int main(){
    int cnt[26] = {0};
    string str;
    getline(cin>>ws,str);
    int l = str.size();
    for(int i = 0;i<l;i++){
        if((str[i]>='a'&&str[i]<='z') || (str[i]>='A'&&str[i]<='Z')) {
        
            char o = tolower(str[i]);
            cnt[o-'a']++;
        }
    }
    for(int i = 0;i<26;i++){
        if(cnt[i]>0){
            cout<< (char)(i+'a')<<" -> "<<cnt[i]<<endl;
        }
    }
}