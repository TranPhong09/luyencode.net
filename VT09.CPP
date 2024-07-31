#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int prime[10000001]; // N = 10^7

void sieve(int N) {
    // ... (Sieve of Eratosthenes implementation as before) ...
	for(int i = 0; i <= 10000000; i++){
		prime[i] = 1;
	}
        //Bước 2 : Sàng
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(10000000); i++){
		if(prime[i]){
			for(int j = i * i; j <= 10000000; j += i){
				prime[j] = 0;
			}
		}
	}
}

int main() {

    int n; // Size of the input array
    cin >> n;

    vector<int> a(n); // Input array to store numbers
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sieve(10000000); // Precompute primes up to 10^7

    // Extract unique prime numbers from the array
    vector<int> primes; // Vector to store unique primes
    for (int i = 0; i < n; i++) {
        if (prime[a[i]]) {
            primes.push_back(a[i]); // Add prime to vector
        }
    }

    // Sort the vector of unique primes in ascending order
    sort(primes.begin(), primes.end());

    // Remove duplicates (consecutive same elements)
    primes.erase(unique(primes.begin(), primes.end()), primes.end());

 
    for (int p : primes) {
        cout << p << " ";
    }

    return 0;
}
