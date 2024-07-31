#include<bits/stdc++.h>
using namespace std ; 
void nhap(){ 
  int n ; cin >> n ; 
  int x ; cin >> x ; 
  int a[n+1]; 
  for ( int i = 0 ; i < n ; i++) cin >> a[i]; 
  bool check = false   ; 
    for ( int i = 0 ; i < n ; i++){
         if ( x== a[i]) check = true ; 
    }
   if (!check) cout<<"NO"; else cout<<"YES";  
 } 
int main(){
    nhap(); 
   
            
}