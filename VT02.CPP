#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >>n; 
    int a[n];
    int max1=INT_MIN ,max2=INT_MIN;
    for(int i=0;i<n;i++){ cin >> a[i]; }
    for(int i=0;i<n;i++){ if(max1 < a[i]){ max1 = a[i]; } }
    int check=0;
    for(int i=0;i<n;i++){ if(max2 < a[i] && a[i]!=max1){ check=1; max2=a[i]; } } 
    if(check==0){ cout <<"NOT FOUND"; } else{ cout << max2; } 
    } 
    
