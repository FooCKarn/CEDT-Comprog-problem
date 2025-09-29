#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin>>str;
    cout << str[0];
    for (int i = 1; i < str.size(); i++) {
        char c = str[i];
        char d = str[i-1];
        if(isupper(c)){
            cout<<", "<<c;
        }
        else if(isdigit(c)&&!isdigit(d)){
            cout<<", "<<c;
        }
        else if(islower(c)&&isdigit(d)){
            cout<<", "<<c;
        }
        else {
            cout<<c;
        }
    }
}
