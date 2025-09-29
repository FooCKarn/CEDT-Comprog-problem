#include<bits/stdc++.h>
struct ans {
    int val;
    int st;
    int en;
    bool operator<(const ans &x) {
        return val < x.val;
    }
};

using namespace std;
int main(){
    vector<int> vec;
    vector<ans> remem;
    int a;
    int mx = 1;
    int test =14;
    while(cin>>a){
        //cin>>a;
        vec.push_back(a);
    }
    int l = vec.size();
    for(int i=0;i<l;i++){
        int k = vec[i];
        int cnt = 0;
        for(int j=i;j<l;j++){
            if(k==vec[j]) cnt++;
            else if(k!=vec[j]){
                break;
            }
            if(cnt>mx){
                remem.clear();
                remem.push_back({k,i,j+1});
                mx = cnt;
            }
            else if(cnt == mx){
                remem.push_back({k,i,j+1});
            }
        }
    }
    sort(remem.begin(),remem.end());
    for(auto x :remem){
        cout<<x.val<<" --> x[ "<<x.st<<" : "<<x.en<<" ]"<<endl;
    }
}
//4 1 5 6 8 2 3 0