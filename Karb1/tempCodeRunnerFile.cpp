#include <bits/stdc++.h>
using namespace std;

long gcd(long a, long b) {
    return b ? gcd(b, a % b) : a;
}

int count_digits(int num) {
    if (num == 0) return 0;
    return floor(log10(num)) + 1;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (b == 0 && c == 0) {
        cout << a << " / 1" << endl;
        return 0;
    }
    if (c == 0) {
        int m = count_digits(b);
        long pow10m = pow(10, m);
        long numerator = a * pow10m + b;
        long denominator = pow10m;
        long k = gcd(numerator, denominator);
        cout << numerator / k << " / " << denominator / k << endl;
        return 0;
    }
    int m = count_digits(b);
    int n = count_digits(c);

    long pow10m = pow(10, m);
    long pow10n = pow(10, n);

    long denominator = pow10m * (pow10n - 1);
    long numerator = a * denominator + b * (pow10n - 1) + c;

    long k = gcd(numerator, denominator);
    cout << numerator / k << " / " << denominator / k << endl;

    return 0;
}
