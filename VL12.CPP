#include<bits/stdc++.h> 
using namespace std ; 
void uoc(int n ){ 
  for ( int i = n ; i >= 1 ; i--){
     if ( n % i == 0 ) cout << i << " " ;
  }
}
int main(){ 
  int n ; cin >> n; 
  n = abs(n); 
  if ( n == 0 ) cout <<"INF" ; else  uoc(n); 
 return 0 ; 
 }