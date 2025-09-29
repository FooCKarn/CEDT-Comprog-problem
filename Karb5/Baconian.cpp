#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,string> chk;
        chk["UUUU"] =  "0";
        chk["UUUL"] =  "1";
        chk["UULU"] =  "2";
        chk["UULL"] =  "3";
        chk["ULUU"] =  "4";
        chk["ULUL"] =  "5";
        chk["ULLU"] =  "6";
        chk["ULLL"] =  "7";
        chk["LUUU"] =  "8";
        chk["LUUL"] =  "9";
        chk["LULU"] =  "-";
        chk["LULL"] =  ",";
     map<char,string> num;
        num['0'] = "UUUU";
        num['1'] = "UUUL";
        num['2'] = "UULU";
        num['3'] = "UULL";
        num['4'] = "ULUU";
        num['5'] = "ULUL";
        num['6'] = "ULLU";
        num['7'] = "ULLL";
        num['8'] = "LUUU";
        num['9'] = "LUUL";
        num['-'] = "LULU";
        num[','] = "LULL";
    string fake; cin>>fake;
    string str;
    while(getline(cin>>ws,str)){
        char order = str[0];
        str.erase(0,2);
        string t ="";
        for(int i = 0;i<str.size();i++){
            if(str[i]!=' ') t += str[i];
        }
        str = t;
        //cout<<str<<endl;
        if(order == 'D'){
            string t = "";
            for(int i = 0;i<str.size();i++){
            if(isalpha(str[i])) t += str[i];
        }
             str = t;
            string ans = "";
            while(!str.empty()){
                string tmp = "";
                for(int i = 0;i<4;i++){
                    if(isupper(str[i])) tmp += "U";
                    else tmp+="L";
                }
                ans += chk[tmp];
                str.erase(0,4);
            }
            cout<<ans<<endl;
        }
        else {
            string line = "";
            for(int i = 0;i<str.size();i++){
            line += num[str[i]];
            }

            //cout<<line<<endl;
            int i = 0;
            int idx = 0;
            while(i<(int)line.size()){
                idx %= (int)fake.size(); 
                char o = fake[idx];
                if(isalpha(o)){
                    if(line[i] == 'U') cout<<(char)toupper(o);
                    else cout<<(char)tolower(o);
                    i++;
                }
                else{
                    cout<<o;
                }
                idx++;
            }
            cout<<endl;
        }
    }
}