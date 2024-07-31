#include <bits/stdc++.h>
#define For(i, a, b, c) for (int i = (a); i <= (b); i += (c))  
#define maxn 2000  
using namespace std;

int dp[maxn][maxn]; 
int res = 0; 

int main() { 
    string s1, s2; 
    cin >> s1 >> s2; 

    For(i, 1, s1.size(), 1) {
        For(j, 1, s2.size(), 1) { 
            if (s1[i-1] == s2[j-1]) { 
                dp[i][j] = dp[i-1][j-1] + 1; 
            } else { 
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]); 
            }
            res = max(res, dp[i][j]); 
        }
    }

    cout << res; 
    return 0;
}
