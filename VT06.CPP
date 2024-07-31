#include<bits/stdc++.h>
using namespace std ; 
int main(){
	int n ; cin >> n ; 
	int a[n+1]; 
	for ( int i = 1 ; i <= n ; i++) cin >> a[i]; 
     float d = 0 ; 
     float s = 0 ;
     for ( int i = 1 ; i <= n ; i++){ 
      if ( a[i] % 2 != 0 ) { d +=1 ; ; s += a[i] ; } }		
      float sum = s/d; 
      cout << fixed << setprecision(4) << sum ; 
}