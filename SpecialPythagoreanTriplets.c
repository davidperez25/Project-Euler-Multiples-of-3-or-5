#include <stdio.h>

#define MAX 1000

int main() {
    int found = 0;

    for (int i = 1; i < MAX; i++) {
        for (int j = i + 1; j < MAX; j++) {
            int c = MAX - i - j;

            if (i*i + j*j == c*c && c > j) {
                printf("Found! (%d, %d, %d) Product: %d\n", i, j, c, i * j * c);
                found++;
                break;
            }
        }
        if (found)
            break;
    }
    return 0;
}
