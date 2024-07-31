#include <bits/stdc++.h>
#define For(i,a,b,c) for(int i = (a) ; i <= (b) ; i+=c )
using namespace std; 
int n , f[60004] , t[60004] , r[60004];
int main(){
     cin>> n; 
    
    for (int i = 1;  i <= n; i++)
    {
        cin >> t[i];
    }
    for (int i = 1; i < n; i++)
     {
        cin >> r[i];
     } 
    f[1] = t[1]; 
    for (int i = 2; i <= n; i++)
    {
       f[i]= min(f[i-1]+t[i],f[i-2]+r[i-1]);
    }
    for ( int i = 1 ; i<=n ;i++) cout <<f[i] <<" "; 
}