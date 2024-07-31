#include <iostream>
using namespace std;

int main() {
    int K;
    cin >> K; 
    while (K--) {
        long long N, X;
        cin >> N >> X; 

        
        long long count = X / N;

       
        cout << count << endl;
    }

    return 0;
}