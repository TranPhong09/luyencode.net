#include<bits/stdc++.h>
using namespace std ; 
int main(){ 
 long long n , x ; 
 long long dem = 0 ;  
 cin >> n >> x ; 
 int  a[n+1];
  for ( int  i = 1  ; i <= n ; i++){ 
  	  cin >> a[i];  }
 for (int  i = 1 ; i <= n ; i++ ) 
 if ( x == a[i]) dem += 1  ;
 cout << dem ; 
return 0 ; 
  }
