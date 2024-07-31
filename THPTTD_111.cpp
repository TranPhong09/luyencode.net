#include <bits/stdc++.h>
#define ll long long  
using namespace std;

int main() {
  freopen("countdiv.INP", "r", stdin);
  freopen("countdiv.OUT", "w", stdout);
   int q ; cin>> q ; 
   while(q--){ 
      ll r , l , a , b ; cin >> r >> l >> a >> b ; 
      ll ans = 0 ; 
      for(int i = r ; i <= l ; i++){
         if (( i % a == 0 )  || ( i%  b == 0)){
              ans++; 
         }
      }
      cout << ans  << endl ;
    }
}
