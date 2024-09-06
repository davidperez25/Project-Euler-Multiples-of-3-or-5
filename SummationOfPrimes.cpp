#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int limit = 2000000;
    vector<bool> is_prime(limit, true);
    is_prime[0] = is_prime[1] = false; // 0 and 1 are not primes

    for (int i = 2; i * i < limit; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j < limit; j += i) {
                is_prime[j] = false;
            }
        }
    }

    long long sum = 0;
    for (int i = 2; i < limit; ++i) {
        if (is_prime[i]) {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}
