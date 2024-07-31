#include<bits/stdc++.h>
using namespace std ; 
int main(){
    
  string s ; getline(cin , s ); 
  string kq =""; 
   int n = s.size();
  for (int i = 0; i < n ; i++)
   {
       if ((( s[i] >= 'a') && s[i] <= 'z')|| (( s[i] >= 'A' ) && (s[i] <= 'Z'))){ 
       kq += s[i]; }
     
    } 
    cout<< kq <<"\n"; 
return 0 ;}
