#include<bits/stdc++.h>
#define For(i,a,b,c) for(int i = (a) ; i <= (b) ; i+=c )
using namespace std ; 
int main(){
     long long  n ; cin >> n ; 
     long long  a[n] , F[n]; 
     long long max =  0; 
      For(i,1,n,1) cin >> a[i]; 
      For(i,1,n,1) F[i] = 1; 
      For(i,1,n-1,1){
         For(j,i+1,n,1){
            if (( a[j] > a[i]) && (F[i] >= F[j]) ) F[j] = F[i] + 1;
            if ( max < F[j]) max = F[j]; 
         }
      }
     cout << max ; 
  return 0 ;    
}
 