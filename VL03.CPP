#include<iostream> 
using namespace std ; 
int main(){
	int  n , s = 0  ; 
    cin >> n ; 
    if ( n >= 2 ) 
      for ( int i = 2; i  <=  n  ; i++) s += i; 
    cout << s+ (n*2) << endl ; 
    return 0 ;
}