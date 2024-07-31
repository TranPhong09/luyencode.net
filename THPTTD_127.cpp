#include <bits/stdc++.h>
#define ll long long 
using namespace std;
bool check(string s ){
    int n = s.length();

   for(int i = 0 ; i < n/2; i++){
      if (s[i] != s[n-i-1]){
         return  false ;
  
      }
   }
   return true ;
}
bool isPrime(unsigned long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (unsigned long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    freopen("SumOfPrimes.INP", "r", stdin);
    freopen("SumOfPrimes.OUT", "w", stdout);
     int q ; cin>> q ; 
     while(q--){ 
          ll ans = 0 ; 
         int r , l ; cin>> r >> l ; 
         for(int i = r ; i <= l ; i++){ 
            if (isPrime(i)){ 
                string str = to_string(i); 
                if (check(str)){
                    ans += i ;
                }
            }
         }
          cout <<ans <<  endl ;
              
         }
    }

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// // Hàm kiểm tra số palindrome
// bool check(string s) {
//     int n = s.length();
//     for (int i = 0; i < n / 2; i++) {
//         if (s[i] != s[n - i - 1]) {
//             return false;
//         }
//     }
//     return true;
// }

// // Sàng lọc số nguyên tố (Sieve of Eratosthenes)
// vector<bool> sieve(ll maxN) {
//     vector<bool> isPrime(maxN + 1, true);
//     isPrime[0] = isPrime[1] = false;
//     for (ll i = 2; i * i <= maxN; i++) {
//         if (isPrime[i]) {
//             for (ll j = i * i; j <= maxN; j += i) {
//                 isPrime[j] = false;
//             }
//         }
//     }
//     return isPrime;
// }

// int main() {
//     freopen("SumOfPrimes.INP", "r", stdin);
//     freopen("SumOfPrimes.OUT", "w", stdout);
//     int q; cin >> q;

//     // Tìm giá trị lớn nhất của r và l để sử dụng cho sàng lọc số nguyên tố
//     vector<pair<int, int>> queries(q);
//     int maxL = 0;
//     for (int i = 0; i < q; i++) {
//         cin >> queries[i].first >> queries[i].second;
//         maxL = max(maxL, queries[i].second);
//     }

//     // Tạo bảng sàng lọc số nguyên tố cho phạm vi lớn nhất
//     vector<bool> isPrime = sieve(maxL);

//     for (auto query : queries) {
//         int r = query.first;
//         int l = query.second;
//         ll ans = 0;
//         for (int i = r; i <= l; i++) {
//             if (isPrime[i]) {
//                 string str = to_string(i);
//                 if (check(str)) {
//                     ans += i;
//                 }
//             }
//         }
//         cout << ans << endl;
//     }

//     return 0;
// }
