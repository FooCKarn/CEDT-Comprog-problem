#include <bits/stdc++.h>
using namespace std;
#define long long long
long gcd(long a, long b) {
 if (b == 0) return a;
 return gcd(b, a%b);
}

int main(){
    long front, up , down, up2, down2;
    string mid, last;
    cin >> front >> mid >> last;
    bool not_float = 0;


    down = (mid == "0" && last == "0") ? 1 : 0;
    down2 = down;
    up = (down == 1) ? front : 0;
    up2 = front;
    not_float = (down2 == 1 && up2 == front) ? 1 : 0;

    down = 0;
    up = 0;

    //down
    string for_down = mid + last;
    int cnt = for_down.length();
    int cnt2 = mid.length();
    down = pow(10, cnt) - pow(10, cnt2);

    //up
    up = front * down;
    int for_up = stoll(for_down);
    up = up + for_up;
    int for_up2 = stoll(mid);
    up = up - for_up2;

    //float
    int coop = gcd(up, down);
    up = up / coop;
    down = down / coop;

    up = (not_float) ? up2 : up;
    down = (not_float) ? down2 : down;

    cout << (long)up << " / " << (long)down<<endl;
    //cout<<"2 / 3"<<endl;
}