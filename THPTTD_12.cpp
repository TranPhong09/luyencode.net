#include <bits/stdc++.h>
#define lls unsigned long long 
#define ll long long
#define GCD(a, b) __gcd(a,b) 
#define LCM(a, b) (a*b)/__gcd(a,b) 
#define ii pair<int,int> 
#define fs first
#define sc second 
#define FOR(i, a, b, c) for(int i = a; i <= b ; i += c)
#define maxn 100000007 
#define nn "\n"
using namespace std;

bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    ll i = 5;
    while (i * i <= n) {
        if ((n % i == 0) || (n % (i + 2) == 0)) {
            return false;
        }
        i += 6;
    }
    return true;
}

int main() {
    freopen("fibo.INP", "r", stdin);
    freopen("fibo.OUT", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;

    if (m < 0) {
        cout << 0 << nn;
        return 0;
    }

    vector<ll> f;
    f.push_back(0);
    if (m >= 1) f.push_back(1); 

 
    while (true) {
        ll fibo = f[f.size() - 1] + f[f.size() - 2];
        if (fibo > m) break; 
        f.push_back(fibo);
    }

    ll ans = 0;
    for (ll num : f) {
        if (num >= n && isPrime(num)) {
            ans++;
        }
    }
    cout << ans << nn;

    return 0;
}
