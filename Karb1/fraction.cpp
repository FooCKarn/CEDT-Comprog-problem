#include <bits/stdc++.h>
using namespace std;

long gcd(long a, long b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int a;
    string b, c;
    cin >> a >> b >> c;

    int m = b.length();
    int n = c.length();
    long pow10m = pow(10, m);
    long pow10n = pow(10, n);
    long B = b.empty() ? 0 : stol(b);
    long C = c.empty() ? 0 : stol(c);
    long denominator = pow10m * ((pow10n - 1) + (C == 0));
    long numerator = a * denominator + B * ((pow10n - 1) + (C == 0)) + C;
    numerator = (B == 0 && C == 0) * a + (B != 0 || C != 0) * numerator;
    denominator = (B == 0 && C == 0) * 1 + (B != 0 || C != 0) * denominator;
    long k = gcd(numerator, denominator);
    cout << numerator / k << " / " << denominator / k << endl;

    return 0;
}
