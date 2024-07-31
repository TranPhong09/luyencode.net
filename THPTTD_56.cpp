#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>

using namespace std;

vector<unsigned long long> generateFibonacci(unsigned long long max_m) {
    vector<unsigned long long> fiboSequence;
    unsigned long long a = 1, b = 1, c;

    fiboSequence.push_back(a);
    if (max_m >= 2) {
        fiboSequence.push_back(b);
    }

    while (true) {
        c = a + b;
        a = b;
        b = c;

        if (c > max_m) {
            break;
        }

        fiboSequence.push_back(c);
    }

    return fiboSequence;
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
    freopen("FIBO.INP", "r", stdin);
    freopen("FIBO.OUT", "w", stdout);

    unsigned long long n, m;
    cin >> n >> m;


    vector<unsigned long long> fiboSeq = generateFibonacci(m);

    int primeCount = 0;

  
    for (unsigned long long fibo : fiboSeq) {
        if (fibo >= n && fibo <= m && isPrime(fibo)) {
            primeCount++;
        }
    }

    cout << primeCount << endl;

    return 0;
}
