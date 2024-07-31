#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
 freopen("SOHOC.inp", "r", stdin);
 freopen("SOHOC.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0); 
    int n ; cin >> n ; 
    int d = 0 ;
    for(int i = 1 ; i <= n ; i++ ){
         if ( n % i ==0 ) d++;
    } 
    if (d == 3 ) { 
      cout << "1" ; } else { 
        cout <<"0"; } 
    return 0;

}
