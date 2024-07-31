#include<bits/stdc++.h> 
using namespace std ; 
int main(){ 
  int n ; cin >> n ;
  int a[n+1];
  for ( int i = 0 ; i < n ; i++){
  	 cin >> a[i]; 
  } 
  
  int* max = max_element(a,a+n);
   cout << *max ; 
  return 0 ; }