#include<bits/stdc++.h> 
using namespace std ; 
int main(){
	 int n  ; 
	 float s ;  
	cin >> n ; 
 for (int i = 2; i <= n ; ++i)
 {
 	  s += (float) 1/i ; 
 }
  cout << fixed << setprecision(4) <<  s ; 
  return 0 ;
}