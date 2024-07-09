#include <stdio.h>

int main() {
    for (int i = 1; ; i++) {
        printf(".");
        int divisible = 1;

        for (int j = 2; j < 20; j++) {
            if (i % j != 0) {
                divisible = 0;
                break;
            }
        }
        if (divisible) {
            printf("Number %lld found...", i);
            break;
        }
    }
}
