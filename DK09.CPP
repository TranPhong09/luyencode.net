#include <bits/stdc++.h>
using namespace std;
 long long a; 
 int main() {
  cin>>a;
   if(a>0 && a<100000) { if(a%4==0 && a%100!=0 || a%400==0) { 
   	cout<<"YES";
    return 0; 
} else { cout<<"NO"; return 0; } } cout<<"INVALID";
     return 0; }