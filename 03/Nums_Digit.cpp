#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
int digits(ull x) {
    int d = 1;
    while (x >= 10) {
        x /= 10;
        ++d;
    }
    return d;
}
ull pow10i(int e) {
    ull p = 1;
    while (e--) p *= 10ULL;
    return p;
}
ull sumDigitsUpTo(ull x) {
    if (x == 0) return 1;

    ull total = 1; 
    int d = digits(x);


    for (int k = 1; k < d; ++k) {
        ull cnt = 9ULL * pow10i(k - 1); 
        total += cnt * (ull)k;          
    }


    ull first = pow10i(d - 1);
    total += (x - first + 1) * (ull)d;

    return total;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    ull M, N;
    cin >> M >> N ;

    ull ans;
    if (M == 0) {
        ans = sumDigitsUpTo(N);
    } else {
        ans = sumDigitsUpTo(N) - sumDigitsUpTo(M - 1);
    }

    cout << ans ;
    return 0;
}
