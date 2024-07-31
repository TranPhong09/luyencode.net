#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ; cin >> n ; 
    int a[n+1];  
    for (int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }
    int tam ;
    for(int i = 2 ; i <= n-2 ; i++){
      for ( int j = i+1 ; j <= n-1 ; j++){ 
        if (a[i] > a[j]){ 
            tam = a[i];
            a[i] = a[j]; 
            a[j] = tam ; 
            }
        }
    }
 for(int i = 1 ; i <= n ; i++) cout << a[i] <<" ";
}