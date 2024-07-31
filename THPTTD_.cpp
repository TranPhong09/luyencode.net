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
    freopen("treelamp.INP", "r", stdin);
    freopen("treelamp.OUT", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ; 
    cin>>n;
    int a[n+1] , b[n+1];
    int res = 0 ;
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        int j=lower_bound(b+1,b+res+1,a[i])-b;
        b[j]=a[i];
        res=max(res,j);
    }
    cout<<res;
    return 0;
}
