#include<iostream>
#include<cmath>
using namespace std ; 
int main(){ 
   double  n ; 
    cin >> n ; 
    double tam = sqrt(n) ; 
    if ( tam == int(tam) ) cout << "YES"  ; else cout << "NO";  
   return 0 ; 
     }