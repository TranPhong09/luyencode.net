#include <bits/stdc++.h>
using namespace std ; 
int main(){ 
     int x ; 
     vector<int> v ; 
     while ( cin >> x ){ 
       if ( x == 0 ){ break ;} 
       if ( x < 0 ){ cout <<x <<" "; v.push_back(x);  };

       }
    if (v.size() == 0 ){ cout <<"NOT FOUND";}   
    return 0 ; 
   }