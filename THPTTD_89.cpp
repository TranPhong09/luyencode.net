#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;

 
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    freopen("bai2.INP", "r", stdin);
    freopen("bai2.OUT", "w", stdout);

    int n, k;
    cin >> n >> k;

    vector<int> a;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < k) {
            a.push_back(x);
        }
    }

   ll result = 0 ; 
    for(const auto & x : a) {
        if (isPrime(x)) {
            result++;
        } 
    }
    
   cout << result;
    return 0;
}
