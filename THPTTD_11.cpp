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
  
int main() {
  //  freopen("TEST.INP", "r", stdin);
  //  freopen("TEST.OUT", "w", stdout);
           
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
                
   ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
    }

    ll max = INT_MIN;
    ll count = 0;

    for (ll i = 0; i < n - 2; ++i) {
        ll sum = a[i] + a[i + 1] + a[i + 2];
        if (sum > max) {
            max = sum;
            count = 1;
        } else if (sum == max) {
            count += 1;
        }
    }

    cout << max << " " << count << nn;
    return 0;
}
