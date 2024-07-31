#include<bits/stdc++.h> 
using namespace std ; 
int main(){ 
   string n ; cin >> n ;
   int l = n.size(); 
   while( n[l-1] == '0'){ l-- ;} 
  for ( int i = l-1 ; i >= 0 ; i--) cout << n[i]  ;  
  return 0 ; 
}