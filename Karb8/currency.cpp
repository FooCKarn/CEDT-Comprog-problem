#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string,double> mp;     
    int n; 
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; ++i) {
        string s; double m;
        cin >> s >> m;
        mp[s] = m;
    }
    mp["THB"] = 1.0;           


    long long mon; 
    string cur;
    cin >> mon >> cur;

    cout << mon << " " << cur;
    string to;
    while (cin >> to) {
        long long nextMon;

        if (cur == "THB" && to == "THB") {
            nextMon = mon;
        } else if (cur == "THB") {
            nextMon = (long long)(mon / mp[to]);
        } else if (to == "THB") {
            nextMon = (long long)(mon * mp[cur]);
        } else {
            nextMon = (long long)(mon * mp[cur] / mp[to]);
        }

        cout << " -> " << nextMon << " " << to;
        mon = nextMon;   
        cur = to;        
    }


}
