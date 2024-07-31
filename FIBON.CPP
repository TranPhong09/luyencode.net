#include<bits/stdc++.h>
#define FOR(i,a,b,c) for(unsigned long long  i = a ; i < b ; i+= c ) 
#define MOD 10000007
using namespace std ; 
int main(){
    unsigned long long  n ; cin >> n; 
    unsigned long long  f[n+1];
    f[1] = 1 ;
    f[2] = 1 ;
    FOR(i,3,n+1,1) { 
    f[i] = f[i-1] + f[i-2]; }
    FOR(i,1,n+1,1){ cout << f[i] << " "; }

    return 0 ;
}