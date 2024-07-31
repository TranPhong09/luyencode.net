#include <bits/stdc++.h>
#define For(i,a,b,c) for(int i=(a);i < (b); i+=c) 
using namespace std; 

int main() { 
    int t;  
    cin >> t;
    cin.ignore(); // Bỏ qua ký tự newline sau khi nhập số t

    while (t--) { 
        string s; 
        getline(cin, s);
        int inc = 0; // Khởi tạo lại biến đếm cho mỗi chuỗi mới

        For(i, 0, s.size(), 1) {
            if (s[i] == ' ' && s[i + 1] != ' ') {
                inc++;
            }
        }

        cout << inc << "\n";
    }
    return 0; 
}
