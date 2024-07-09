#include <stdio.h>

int main() {
    int factors[100] = {0};

    long long int num = 600851475143;
    int divisor = 2;

    while (num > 1) {
        while (num % divisor == 0) {
            for (int i = 0; i < sizeof(factors) / sizeof(int); i++) {


                if (factors[i] == 0) {
                    factors[i] = divisor;
                    num /= divisor;

                    break;
                }
            }
        }
        divisor++;
    }
    for (int i = 0; i < sizeof(factors) / sizeof(int); i++) {
        if (factors[i] == 0) break;
        printf("%d\n", factors[i]);
    }
}
