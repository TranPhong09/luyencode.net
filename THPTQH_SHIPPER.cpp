#include <bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;

int main() {
    freopen("SHIPPER.INP", "r", stdin);
    freopen("SHIPPER.OUT", "w", stdout);
   
    int n , m ; cin >> n >> m ; 
    int f[100005] = {0};
    int a[n+5]; 
     for(int i = 1 ; i <= n ; i++){ 
          cin >> a[i];
          f[a[i]]++; 
        }
      int ans = 0 ;   
     for(  int i  = 1 ; i<= 100005 ; i++){ 
          if (( f[i] > 0 ) && (f[i] <= m )){ 
              ans = max(ans,f[i]);
                 }
       }
     cout << ans ;    
    return 0;

}
