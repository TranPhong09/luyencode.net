#include<bits/stdc++.h> 
using namespace std ; 
int main(){ 
 map<int,int>mp; 
 
 int n  ; cin >> n ;
 int a[n+1]; 
 for ( int i = 1 ; i <= n ; i++){ 
    cin >> a[i] ; 
    mp[a[i]]++ ;
     
     }
   cout << mp.size() << endl ;  
  for ( int i = 1 ; i <= n ; i++){
      
     if (mp[a[i]] != 0 ){
           
        cout << a[i] << " " << mp[a[i]] << endl ;
        mp[a[i]] = 0 ; 
     }
  }      
 return 0 ;  }