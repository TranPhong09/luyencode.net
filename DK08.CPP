#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std ; 
int main(){ 
  char t ; 
  float a , b ; 
   cin >> a >> t >> b ;
  if ( b == 0 ) cout << "Math Error" ; 
else      
  if ( t == '+') 	cout << fixed<< setprecision(2) <<  a + b;
else    
  if ( t == '-')    cout << fixed << setprecision(2) << a - b ; 
else 
  if ( t == '*')    cout << fixed << setprecision(2) << a * b ; 
else 
  if ( t== '/')     cout << fixed << setprecision(2) << a/b   ; 
else cout<<"";


  return 0 ;  
 }