#include <bits/stdc++.h>
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
    freopen("chenhlech.INP", "r", stdin);
    freopen("chenhlech.OUT", "w", stdout);
   
   ios::sync_with_stdio(false);
    cin.tie(nullptr);

     int n  ; cin >> n ; 
     ii a[n+1]; 
     int ans = INT_MAX ;
     map<int,int> mp ; 
     for(int i = 0; i< n; i++){
         cin >> a[i].first >> a[i].second ;
         ans = abs(a[i].fs-a[i].sc);
         mp[ans]++; 
     }
       int max_second = 0;
    int val = 0;

    for (const auto& x : mp) {
        if (x.second > max_second ) {
            max_second = x.second;
           val = x.first;
        }
    }

    cout << val << nn;
    
     for(const auto& x : a){
         if (abs(x.fs - x.sc) == val){
             cout << x.fs << " " << x.sc << nn;
         }
     }
    return 0;
}
