#include<bits/stdc++.h> 
using namespace std ; 
int main(){
    int a[11]; 
    for ( int  i = 1 ; i <= 11 ; i++) cin >> a[i]; 
   bool check = false ; 
    for ( int i = 1 ; i <= 10 ; i++){ 
      if ( a[11] == a[i]){ cout << i  << " ";  check = true ; }
    }     
   if (!check) cout<< "-1";     
}
