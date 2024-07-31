#include<bits/stdc++.h>
using namespace std;
int giaithua(int n){
if (n==0){ return 1 ;} else 
return n * giaithua(n-1);
}
int main(){
double x , s = 0;
 int n; cin >> x>>n;
 
 for (int  i = 1 ; i <= n ; i++){
 s =s+ pow(x,i)/giaithua(i);
 }
 cout << fixed << setprecision(2)<< s << endl;
 }