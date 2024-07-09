int main() {
    int stack = 0;

    for (int i = 0; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            stack += i;
        }
    }
    printf("%d", stack);
}
