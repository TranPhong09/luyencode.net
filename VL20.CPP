#include<bits/stdc++.h>
using namespace std ; 
int main(){ 
 char a , b ; cin >> a >> b ; 

 for ( int i =static_cast<int>(a) ; i <= static_cast<int>(b) ; i++ ){
     cout << static_cast<char>(i-32) << "  " ;  
 }  
return 0 ; }