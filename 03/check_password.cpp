#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    while(cin>>str){
        int l = str.size();
        bool chkA =false ,chkB = false,chkC = false,chkD = false ;
        for(int i = 0;i<l;i++){
            char tmp = str[i];
            if(tmp>='A'&&tmp<='Z') chkA= true;
            if(tmp>='a'&&tmp<='z') chkB= true;
            if(tmp>='0'&&tmp<='9') chkD = true;
            if(!isalnum(tmp)) chkC = true;
        }
        if(l>=12&&chkA&&chkB&&chkC&&chkD) cout<<">> strong"<<endl;
        else if(l>=8&&chkA&&chkB&&chkD) cout<<">> weak"<<endl;
        else cout<<">> invalid"<<endl;


    }
}