#include<bits/stdc++.h>
#define FOR(i, a, b, c) for(int i=(a); i<(b); i+=c)
using namespace std ;

int main(){
    int n ; cin >> n ; 
    int a[n+1]; 
    FOR (i , 0 , n,1) cin >> a[i]; 
    int* max = max_element(a,a+n); 
    int* min = min_element(a,a+n); 
    cout << *max-*min ;    
}