#include<bits/stdc++.h>
using namespace std;
int main(){
    long long A,F;
    cin>>A>>F;
    long long i,j;
    map<string,vector<char>> gate;
    set<string> merge;
    vector<tuple<long long,string,string>> ans;
    string s1,s2,s3,s = "",x,y;
    long long num,change,ch,min = 1e9;
    for(i=0;i<A;i++){
        cin>>s1>>s2;
        gate[s1] = vector<char>();
        for(j=0;j<s2.length();j++){
            gate[s1].push_back(s2[j]);
        }
    }
    for(i=0;i<F;i++){
        cin>>s1;
        s = "";
        min = 1e9;
        if(s1 == "MERGE"){
            cin>>s2>>s3;
            merge.insert(s2);
            merge.insert(s3);
            x = *(--merge.end());
            y = *merge.begin();
            for(j=0;j<gate[x].size();j++){
                gate[y].push_back(gate[x][j]);
            }
            i--;
            /*cout<<"Now gate "<<*merge.begin()<<" status : ";
                for(j=0;j<gate[*merge.begin()].size();j++){
                    cout<<gate[*merge.begin()][j];
            }
            cout<<endl;*/
            merge.clear();
        }
        else{
            s = "";
            s += s1[0];
            s += s1[1];
            s += s1[2];
            if(s1.length() == 8){
                num = (s1[4] - '0') * 100 + (s1[5] - '0') * 10 + s1[6] - '0';
            }
            else if(s1.length() == 7){
                num = (s1[4] - '0') * 10 + s1[5] - '0';
            }
            else num = s1[4] - '0';
            gate[s][num] = '0';
            cin>>s2;
            s = "";
            s += s2[0];
            s += s2[1];
            s += s2[2];
            if(s1.length() == 8){
                num = (s2[4] - '0') * 100 + (s2[5] - '0') * 10 + s2[6] - '0';
            }
            else if(s2.length() == 7){
                num = (s2[4] - '0') * 10 + s2[5] - '0';
            }
            else num = s2[4] - '0';
            //cout<<"Airport name = "<<s<<endl;
            //cout<<"Num = "<<num<<endl;
            if(gate[s][num] == '1'){
                for(j=0;j<gate[s].size();j++){
                    if(gate[s][j] == '0'){
                        ch = abs(num-j);
                        if(ch < min){
                            min = ch;
                            change = j;
                        }
                    }
                }
                gate[s][change] = '1';
                /*cout<<"Now gate "<<s<<" status : ";
                for(j=0;j<gate[s].size();j++){
                    cout<<gate[s][j];
                }
                cout<<endl;*/
                if(min != 1e9){
                    ans.push_back(make_tuple(i,"SHIFT",s+"["+to_string(change)+"]"));
                }
                else{
                    ans.push_back(make_tuple(i,"CANCEL",""));
                    s = "";
                    s += s1[0];
                    s += s1[1];
                    s += s1[2];
                    if(s1.length() == 8){
                        num = (s1[4] - '0') * 100 + (s1[5] - '0') * 10 + s1[6] - '0';
                    }
                    else if(s1.length() == 7){
                        num = (s1[4] - '0') * 10 + s1[5] - '0';
                    }
                    else num = s1[4] - '0';
                    gate[s][num] = '1';
                    continue;
                }
            }
            else if(gate[s][num] == '0'){
                gate[s][num] = '1';
                /*cout<<"Now gate "<<s<<" status : ";
                for(j=0;j<gate[s].size();j++){
                    cout<<gate[s][j];
                }
                cout<<endl;*/
            }
        }
    }
    if(ans.empty()){
        cout<<"NO CHANGE";
        return 0;
    }
    for(i=0;i<ans.size();i++){
        if(get<2>(ans[i]) == ""){
            cout<<get<0>(ans[i])<<" "<<get<1>(ans[i]);
        }
        else cout<<get<0>(ans[i])<<" "<<get<1>(ans[i])<<" "<<get<2>(ans[i]);
        if(i != ans.size() -1){
            cout<<endl;
        }
    }
}