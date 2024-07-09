#include <stdio.h>

int main() {
    int sum = 0;

   int last = 0;
   int current = 1;


   for (int i = 0; i < 100; i++) {

        int next = last + current;
        last = current;
        current = next;

        if (current <= 4000000 && current > 0 && current % 2 == 0) { sum += current; }
   }
   printf("%d\n", sum);
}
