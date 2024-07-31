#include<bits/stdc++.h>
using namespace std ; 
int main(){ 
 long long n ; cin >> n ; 
 long long i= 0  ; 
 long long s =0 ;  
 while ( s <= n ){ 
    i++  ; 
    s += i; 
   }
   cout << i-1 ;
 return 0 ; 
}