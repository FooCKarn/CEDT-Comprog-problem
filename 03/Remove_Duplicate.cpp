#include <bits/stdc++.h>
using namespace std;

int main() {
    string str; cin >> str;
    int k; cin >> k;
    int l = (int)str.size();
    if (l == 0) { cout << ""; return 0; }
    string ans = "";
    int cnt = 1;
    char tmp = str[0];
    int i = 1;
    while (i < l) {
        if (str[i] == tmp) {
            cnt++;
        } else {
            if (cnt < k) {
                int tpp = cnt;
                while (tpp--) ans += tmp; 
            }
            tmp = str[i];
            cnt = 1;
        }
        i++;
    }
    if (cnt < k) {
        int tpp = cnt;
        while (tpp--) ans += tmp;
    }

    cout << ans;
    return 0;
}
