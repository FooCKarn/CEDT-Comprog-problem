#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string str1,str2;
    char a1,b1,c1,a2,b2,c2;
    double gpax1,gpax2;
    string ans;
    cin>>str1>>gpax1>>a1>>b1>>c1;
    cin>>str2>>gpax2>>a2>>b2>>c2;
    

    if(a1!='A'||b1>'C'||c1>'C'){
        if(a2!='A'||b2>'C'||c2>'C'){
            cout<<"None";
            return 0;
        }
        else{
            cout<<str2;
            return 0;
        }
    }

    if(a2!='A'||b2>'C'||c2>'C'){
        if(a1=='A'||b1<'C'||c2<'C'){
            cout<<str1;
            return 0;
        }
    }

    if(gpax1!=gpax2){
        if(gpax1<gpax2) cout<<str2;
        else cout<<str1;
        return 0;
    }
    else{
        if(b1!=b2){
            if(b1<b2) cout<<str1;
            else cout<<str2;
            return 0;
        }
        else{
            if(c1!=c2){
                if(c1<c2) cout<<str1;
                else cout<<str2;
                return 0;
            }
            else{
                cout<<"Both";
            }
        }
    }



}