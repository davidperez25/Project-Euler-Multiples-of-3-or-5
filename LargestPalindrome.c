#include <stdio.h>
#include <string.h>

void strrevr(char* str) {
    int n = strlen(str);

    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    int largest = 0;

    for (int i = 100; i < 999; i++) {
        for (int j = 100; j < 999; j++) {
            char str[7];
            sprintf(str, "%d", i * j);
            char rev[7];
            strcpy(rev, str);
            strrevr(rev);
            if (strcmp(str, rev) == 0) {
                    printf(".");
                if ((i * j) > largest) {
                    largest = i * j;
                    printf("\n'%d' is now the largest palindrome found!\n", i * j);
                }
            }
        }
    }
}
