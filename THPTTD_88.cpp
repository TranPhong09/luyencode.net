#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isBeautifulNumber(int num) {
    string s = to_string(num);
    for (int i = 0; i < s.length() - 1; ++i) {
        if (s[i] > s[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    freopen("bai1.INP", "r", stdin);
    freopen("bai1.OUT", "w", stdout);

    int N;
    cin >> N;

    vector<int> numbers(N);
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    bool found = false;
    for (int i = 0; i < N - 1 && !found; ++i) {
        for (int j = i + 1; j < N && !found; ++j) {
            int sum = numbers[i] + numbers[j];
            if (isBeautifulNumber(sum)) {
                found = true;
            }
        }
    }

    cout << (found ? 1 : 0) << endl;

    return 0;
}
