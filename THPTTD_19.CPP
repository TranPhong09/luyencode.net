#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    freopen("DEMUOC.INP", "r", stdin);
    freopen("DEMUOC.OUT", "w", stdout);
    
    long long n;
    cin >> n;
    
  
    vector<int> a(n + 1, 0);
    
    for (long long i = 1; i <= n; ++i) {
        for (long long j = 2 * i; j <= n; j += i) {
            ++a[j];
        }
    }
    
    int max = -1;
    int ans = -1;
    
    for (int i = 1; i <= n; ++i) {
        if (a[i] > max) {
           max = a[i];
            ans = i;
        }
    }
    
    cout << ans<< '\n';
    
    return 0;
}
