#include <bits/stdc++.h>
using namespace std;

int n,sum = 0;

void solve() {


cin >> n;

for(int i = 1;i <= 3 * n + 1; ++i)
{
    if(i % 2 == 0)
        sum -= i;
    else
        sum += i;
}

cout << sum;
}

main() {


solve();
return 0;
}