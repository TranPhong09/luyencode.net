#include <iostream>
using namespace std;

long long solve(int n, int k) {
if (k > n - k) {
    k = n - k;
}
long long result = 1;
for (int i = 0; i < k; ++i) {
    result *= (n - i);
    result /= (i + 1);
}
return result;
}

int main() {
int n, k;
cin >> n >> k;
cout << solve(n, k) << endl;
return 0;
}