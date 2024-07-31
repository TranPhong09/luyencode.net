#include<bits/stdc++.h>
using namespace std ;
int main(){
int n, tam  ; cin >> n;
int a[n+1];
for (int i =1 ; i <= n ; i++){
 cin >> a[i] ;
 }
 for ( int i = 1 ; i <= n-1; i++ ){
  for (int j = i+1 ; j <= n; j++)
   if (a[i] <= a[j]) {
   tam = a[i];
   a[i] = a[j] ;
   a[j] = tam ;
   }
  }
  for (int i =1 ; i <= n ; i++){ cout << a[i] << " ";  }
  return 0 ; 
  } 