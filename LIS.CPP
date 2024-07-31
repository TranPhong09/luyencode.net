#include<bits/stdc++.h>
#define maxn 30004
using namespace std;
  
int main()
{
    int n ; 
    cin>>n;
    int a[n+1] , b[n+1];
    int res = 0 ;
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++)
    {
        int j=lower_bound(b+1,b+res+1,a[i])-b;
        b[j]=a[i];
        res=max(res,j);
    }
    cout<<res;
}
