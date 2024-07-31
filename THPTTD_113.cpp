#include <bits/stdc++.h>
#define ll long long 
#define lls unsigned long long
using namespace std;

int main() {
    freopen("minrange.INP", "r", stdin);
    freopen("minrange.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     int  n , k ; cin>> n >> k ; 
     int a[n+1] ; 
     memset(a,0,sizeof(a)); 
     for(int i = 1 ; i <= n ; i++){
          cin >> a[i] ;
     } 
     int l = 1; 
     while( k <= n){
       ll   minx = 1e9+7 ; 
        for(int i= l ; i <= k ; i++){
              if ( minx > a[i]){
                minx = a[i]; 
              }

        }
       cout << minx << endl;
       l++; 
       k++ ;  
     }
    return 0;
}





// #include <iostream>
// #include <deque>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     freopen("minrange.INP", "r", stdin);
//     freopen("minrange.OUT", "w", stdout);
    
//     int n, k;
//     cin >> n >> k;
    
//     vector<int> a(n + 1); // Mảng số nguyên, sử dụng vector thay vì mảng tĩnh
//     for (int i = 1; i <= n; ++i) {
//         cin >> a[i];
//     }
    
//     deque<int> dq; // Deque để lưu chỉ số của phần tử nhỏ nhất trong khoảng
//     vector<int> result; // Kết quả lưu trữ các giá trị nhỏ nhất trong các khoảng

//     // Xử lý các khoảng từ 1 đến k
//     for (int i = 1; i <= n; ++i) {
//         // Xoá các chỉ số không còn nằm trong khoảng k
//         if (!dq.empty() && dq.front() < i - k + 1) {
//             dq.pop_front();
//         }
//         // Xoá các phần tử không cần thiết từ deque
//         while (!dq.empty() && a[dq.back()] > a[i]) {
//             dq.pop_back();
//         }
//         // Thêm chỉ số của phần tử hiện tại vào deque
//         dq.push_back(i);
//         // In giá trị nhỏ nhất của khoảng khi đủ điều kiện
//         if (i >= k) {
//             result.push_back(a[dq.front()]);
//         }
//     }
    
//     for (int i : result) {
//         cout << i << '\n';
//     }
    
//     return 0;
// }
