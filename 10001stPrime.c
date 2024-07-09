#include <stdio.h>

#define MAX 150000
#define TARGET 10001

void soe(int n) {
    int iarr[n + 1];
    int count = 0;

    for (int i = 0; i <= n; i++) {
        iarr[i] = 1;
    }

    int p = 2;

    while (p * p <= n) {
        if (iarr[p] == 1) {
            for (int i = p * p; i <= n; i+= p) {
                iarr[i] = 0;
            }
        }
        p++;
    }
    for (int i = 2; i <= n; i++) {
        if (iarr[i]) {
            count++;

            if (count == TARGET) {
                printf("FOUND!! (%d)", i);
                break;
            } else {
                printf("%d : %d\n", i, count + 1);
            }
        }
    }
}

int main() {
    soe(MAX);
}
