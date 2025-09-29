#include<bits/stdc++.h>
using namespace std;
bool compare(const vector<int>& a, const vector<int>& b) {
    int sumA = accumulate(a.begin(),a.end(),0);
    int sumB = accumulate(b.begin(),b.end(),0);

    if (sumA != sumB) return sumA > sumB;              
    if (a.size() != b.size()) return a.size() < b.size(); 
    return a < b; 
}
int main(){
    string method;cin>>method;
    int x;
    vector<int> nums;
    int test = 10;
    while(cin>>x) nums.push_back(x);

    vector<vector<int>> bins;
    for(auto v:nums){
        int idx = -1;
        if(method == "first"){
            for(int i = 0;i<bins.size();i++){
                int sum = accumulate(bins[i].begin(),bins[i].end(),0);
                if(sum+v<=100){
                    idx = i;
                    break;
                }
            }
        }
        else{
            int best_remain = 101;
            for(int i = 0;i<bins.size();i++){
                int sum = accumulate(bins[i].begin(),bins[i].end(),0);
                if(sum+v<=100){
                    int remain = 100 - sum - v;
                    if(remain<best_remain){
                        best_remain = remain;
                        idx = i;
                    }
                }
            }
        }
        if(idx == -1) {
            bins.push_back({v});
        }
        else{
            bins[idx].push_back(v);
        }
    }
    for(auto &x:bins) sort(x.begin(),x.end());
    sort(bins.begin(),bins.end(),compare);
    for (auto &b : bins) {
        for (int i = 0; i < (int)b.size(); i++) {
            if (i) cout << " ";
            cout << b[i];
        }
        cout << "\n";
    }

}