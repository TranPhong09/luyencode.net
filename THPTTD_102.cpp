#include <bits/stdc++.h>
#define ll long long 
using namespace std;


int main() {
    freopen("replacedigit.INP", "r", stdin);
    freopen("replacedigit.OUT", "w", stdout);
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
     int q ; cin>> q ; 
     while(q--){ 
         string s;
        cin >> s;
        for (char &ch : s) {
            if (ch == '0') {
                ch = '5';
            }
        }
        cout << s << endl;
         }
    }
