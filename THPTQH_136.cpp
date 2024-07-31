#include <bits/stdc++.h>
#define ll long long  
using namespace std;

int main() {
    freopen("xaucon.INP", "r", stdin);
    freopen("xaucon.OUT", "w", stdout);
    string s ; cin >> s ; 
    int inc = 0 ;
    int ans = 0 ; 

    for( char x : s ){ 
     if( x =='0'){
        inc++; 
        if ( inc > ans ){
             ans = inc ; 
        } 
     } else inc = 0 ;
 }
    cout << ans ;
    return 0;
}
