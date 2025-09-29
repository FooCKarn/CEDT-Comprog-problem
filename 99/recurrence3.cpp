#include <bits/stdc++.h>
using namespace std;
int G(int x, int y) { // Greater Common Divisor
    if(y==0) return x;
    return G(y,x % y);
}
int J(int n, int k) { // Josephus Problem
    if(n==1) return 0;
    return (J(n-1,k)+k)%n;
}
int A(int m, int n) { // Ackermann Number
    if(m==0) return n+1;
    if(m>0&&n==0) return A(m-1,1);
    if(m>0&&n>0) return A(m-1,A(m,n-1));
}
int D(int m, int n) { // Delannoy number
    if(m == 0 || n == 0) return 1;
    return D(m-1,n)+D(m-1,n-1)+D(m,n-1);
}
int main() {
    map<string, int(*)(int,int)> func = {{"G",G}, {"J",J}, {"A",A}, {"D",D}};
    string fn;
    int p1, p2;
    while (cin >> fn >> p1 >> p2) {
    if (func.find(fn) != func.end())
        cout << fn << '(' << p1 << ',' << p2 << ") = " << func[fn](p1,p2) << endl;
        }
    return 0;
}
