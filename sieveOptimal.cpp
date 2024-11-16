#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin >> n;

    if (n <= 2) {
        cout << 0 << endl; // No primes less than 2
        return 0;
    }

    vector<bool> isPrime(n, true); // `n` elements, all initialized to true
    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i < n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    int count = count_if(isPrime.begin(), isPrime.end(), [](bool p) { return p; });

    cout << count << endl;
    return 0;
}
