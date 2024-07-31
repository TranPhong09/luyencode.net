#include<bits/stdc++.h>
using namespace std; int main() {
    int n; cin>>n;
    int a[n]; 
    for(int i=0;i<n;i++) cin>>a[i]; 
for(int i=0;i<n-1;i++){ if(i%2!=0) { int p=abs(a[i-1]-a[i+1]); a[i]+=p; } }
if((n-1)%2!=0) a[n-1]+=a[n-2]; 
for(int i=0;i<n;i++) cout<<a[i]<<" ";
return 0; }