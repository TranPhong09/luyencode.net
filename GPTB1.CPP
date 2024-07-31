#include <bits/stdc++.h>
using namespace std;

int main(){ 
	double a,b,c, d, e,f; 
	cin >> a >> b >> c >> d >> e >> f;
	 if(a/d==b/e){ if(a/d==c/f) cout << "VOSONGHIEM"; else cout << "VONGHIEM"; }
	  else{ double x1, x2; x2=(c*d-f*a)/(b*d-e*a); x1=(c-x2*b)/a; 
	  	cout << fixed << setprecision (2) << x1 << " " << x2 << endl; } return 0;
}