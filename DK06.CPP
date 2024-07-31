#include<iostream> 
#include<iomanip>
using namespace std ; 
int main(){ 
 float a , b ; 
 cin >> a >> b ; 
 if (( a == 0 ) && ( b != 0 )){ cout << "NO" ; } 
 else if (( a == 0 ) && ( b == 0 )){ cout << "WOW"; } 
else cout << fixed << setprecision(2) << -b/a << endl ; 
return 0 ;   
}