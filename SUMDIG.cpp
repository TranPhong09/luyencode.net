#include<bits/stdc++.h> 
#define lls unsigned long long 
using namespace std ;
 lls sum( lls n){
    lls s = 0 ; 
    while ( n != 0 ){ 
       s += n % 10 ; 
       n = n / 10 ; 
      }
     return s;  
 }
int main(){
  int t ; cin >> t ; 
    while(t--){ 
      lls n ; cin >> n ; 
       cout << sum(n)<<"\n"; }  
 return 0 ; 
}
