#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int lcm(int a, int b) {
    return abs(a * b) / gcd(a, b);
}

int main() {
    int a, b;
    cin >> a >> b;

    if (b == 0) {
        cout << "INVALID" << endl;
        return 0;
    }

    int gcd_val = gcd(a, b);
    a = a / gcd_val;
    b = b / gcd_val;

    if (b == 1) {
        cout << a << endl;
    } else {
        if (b < 0) {
            b = abs(b);
            a = -a;
        }
        cout << a << " " << b << endl;
    }

    return 0;
}
