#include <bits/stdc++.h>
using namespace std;

int main() {
    double x; 
    cin >> x ;
    const double rad = x * M_PI / 180.0;
    double sx = sin(rad);
    double cx = cos(rad);

    double top = sqrt(x * x + cx * cx);
    double dow = (cx * cx * cx) / (x * x + 1.0);

    cout << fixed << setprecision(1) << top / (sx + dow);
    return 0;
}
