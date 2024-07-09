#include <stdio.h>

int main() {
    long long num1 = 0;
    long long num2 = 0;
    for (int i = 0; i <= 100; i++) {
        num1 += (long long)i * i;
    }
    for (int i = 0; i <= 100; i++) {
        num2 += i;
    }
    num2 *= num2;
    num2 -= num1;
    printf("%lld\n",num2);
}
