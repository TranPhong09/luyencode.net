#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
long long a,b; cin>>a>>b;
cout<<abs((a*b)/(__gcd(a,b)));
return 0;
}