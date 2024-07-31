#include<bits/stdc++.h>  
using namespace std ; 
bool check(string &a , string&b){  return  a+b > b+ a ; }
int main(){ 
  int n ; cin >> n ;
  string a[n+1];
  for ( int i = 0 ; i < n ; i++){
     cin >> a[i]; 
  }
  sort(a,a+n,check); 
  for (int i = 0; i < n; i++)
   {
      cout <<a[i];
   }
  }
