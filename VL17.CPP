#include<bits/stdc++.h>
using namespace std ; 
int main(){
 int n   ; cin >> n ;
  n = abs(n) ; 
  int d = 0 ; 
  if ( n == 0 ) return 0 ; else 
   for ( int i = 1 ; i <= n ; i++){ 
     if ( n % i == 0 ) d += 1; }
    cout << d ;  

	 return 0 ; 
	} 