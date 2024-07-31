#include <bits/stdc++.h>
using namespace std;

int main() {
 double a;
  cin >> a;
   int b = int(a);
    if (abs(a) - abs(b) < 0 || (abs(a) - abs(b)) >= 0.5 ) 
      if (a < 0) cout << b-1 << endl; else cout << b+1 << endl;
       else if (abs(a) - abs(b) < 0 || (abs(a) - abs(b)) < 0.5 ) cout << b << endl;
        return 0; }