#include <bits/stdc++.h>
using namespace std;
int whl(int n){
    int s = 0 ;
    while( n !=  0 ){ 
         s += n % 10; 
         n /= 10 ; 
      }
     return s ;  
}
int main() {
 freopen("digits.inp", "r", stdin);
 freopen("digits.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0); 
    int q ; cin >> q ; 
    while(q--){ 
       int n ; cin >> n ; 
       cout << whl(whl(whl(n))) << endl ;
      }
    return 0;
 }