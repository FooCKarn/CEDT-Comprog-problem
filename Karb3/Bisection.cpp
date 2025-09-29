#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie();
    double a; 
    cin >> a;
    int k = 0;
    double t = a;
    while (t >= 10.0) { t /= 10.0; ++k; }
    while (t < 1.0)   { t *= 10.0; --k; }
    double l = k, r = k + 1.0;
    while (true) {
        double mid = (l + r) / 2.0;
        double v = pow(10.0, mid);
        if (abs(v - a) <= 1e-10 * max(a, v)) {
            cout << mid ;
            return 0;
        }
        if (v > a) r = mid;
        else       l = mid;
    }
}
