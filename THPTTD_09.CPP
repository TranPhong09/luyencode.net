#include <bits/stdc++.h>
#define lls unsigned long long 
#define ll long long
#define GCD(a, b) __gcd(a,b) 
#define LCM(a, b) (a*b)/__gcd(a,b) 
#define ii pair<int,int> 
#define fs first
#define sc second 
#define FOR(i, a, b, c) for(int i = a; i <= b ; i += c)
#define maxn 100001 
#define nn "\n"
using namespace std;
int a[maxn] = {0}; 
int main() {
    freopen("SUMX.INP", "r", stdin);
    freopen("SUMX.OUT", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s, d = 0;
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        int x; 
        cin >> x; 
        a[x]++; 
    }
    for (int i = 1; i <= s / 2; ++i) { 
        if (a[i] && a[s - i]) { 
            if (i != s - i) { 
                d += a[i] * a[s - i]; 
            } else { 
                d += a[i] * (a[i] - 1) / 2;
            }
        }
    }
    cout << d;
    return 0;
}
