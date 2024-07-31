#include <bits/stdc++.h>
using namespace std;
 float a,b,s=0; 
 int main() { 
    cin>>a>>b;

cout << a+b << endl;

cout << a-b << endl;

cout << a*b << endl;

s=a/b;

if(a==0||b==0)

    cout << "ERROR";

else
     cout << fixed << setprecision(2) << s<< endl;
      }