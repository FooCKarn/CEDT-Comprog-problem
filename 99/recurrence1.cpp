#include <bits/stdc++.h>
using namespace std;
int H(int n) { // Tower of Hanoi
    if(n==0) return 0;
    else return 2*H(n-1)+1;
}
int C(int n) { // Catalan Number
    if(n<1) return 1;
    int ans = 0;
    for(int k = 0;k<n;k++){
            ans += C(k)*C(n-1-k);
    }
    return ans;
}
int F(int n);
int M(int n);

int F(int n);
int M(int n);

int F(int n) {
    if (n <= 0) return 1;          
    return n - M(F(n - 1));
}

int M(int n) {
    if (n <= 0) return 0;         
    return n - F(M(n - 1));
}


int main() {
 map<string, int(*)(int)> func = {{"H",H}, {"C",C}, {"F",F}, {"M",M}};
 string fn;
 int p;
 while (cin >> fn >> p) {
 if (func.find(fn) != func.end())
    cout << fn << '(' << p << ") = " << func[fn](p) << endl;
 }
 return 0;
}
