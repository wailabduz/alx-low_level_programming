#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...) {
    if (n == 0) {
        return 0;
    }

    int sum = 0;
    va_list args;
    va_start(args, n);

    for (unsigned int i = 0; i < n; i++) {
        int value = va_arg(args, int);
        sum += value;
    }

    va_end(args);

    return sum;
}

int main() {
    printf("Sum: %d\n", sum_them_all(4, 10, 20, 30, 40)); // Output: Sum: 100
    printf("Sum: %d\n", sum_them_all(0)); // Output: Sum: 0
    return 0;
}

