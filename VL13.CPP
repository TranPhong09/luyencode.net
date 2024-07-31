#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n <= 1) {
        cout << "NO";
    } else {
        int sum = 1;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) sum += i;
        }
        
        if (n == sum) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }

    return 0;
}
