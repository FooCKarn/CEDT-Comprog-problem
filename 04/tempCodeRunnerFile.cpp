#include <bits/stdc++.h>
using namespace std;
void print(vector<int>& v) {
    for (auto e : v) {
        cout << e << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int ct = n;
    while (ct-- > 0) {
        int mx = max_element(v.begin(),v.begin()+ct+1) - v.begin();
        if(mx == ct) continue;
        if(mx != 0){
            reverse(v.begin(),v.begin()+mx+1);
            print(v);
        }
            reverse(v.begin(),v.begin()+ct+1);
            print(v);
    }
}