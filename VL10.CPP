#include <iostream>
#include <string>
using namespace std;

int main(){ 
 string n;
 cin>>n;
 int count = 0;
 for (char digit : n) { if (isdigit(digit)) { count++; } }
	    cout << count << endl; return 0; }