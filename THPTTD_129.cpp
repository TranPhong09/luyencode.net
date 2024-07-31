#include <bits/stdc++.h>
using namespace std;

int main() {
  int q ; cin>> q ; 
  while(q--){
     int n ; cin>> n; 
     vector<int> a; 
     set<int> st ; 
     for(int i = 1 ; i <= n ; i++){
         int x ; cin >> x ;  
         if (st.find(x) == st.end()){
             a.push_back(x);
                st.insert(x); 
         }
     }
     for(int x : a) {
         cout << x <<" ";
     }     
  }
}
