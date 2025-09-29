#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    while (getline(cin>>ws, str)) {
        char key = str.back();        
        bool inside = false;
        for (int i = 0; i + 1 < str.size(); i++) {
            char c = str[i];
            if (c == key) {
                inside = !inside;     
            } else if (inside) {
                cout << c;            
            }
        }
        cout << '\n';
    }
    return 0;
}
