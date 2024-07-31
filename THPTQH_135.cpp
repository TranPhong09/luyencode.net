#include <bits/stdc++.h>
#define ll long long  
using namespace std;

int main() {
    freopen("DAYSO.INP", "r", stdin);
    freopen("DAYSO.OUT", "w", stdout);
    
    int n; 
    cin >> n;
    ll sum = (ll)n * (n + 1) / 2;

    cout << sum << endl;
    
    return 0;
}
