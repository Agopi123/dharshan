#include <stdio.h>
#include <stdarg.h>

// Function to add integers
int add_int(int num, ...) {
    int sum = 0;
    va_list args;
    va_start(args, num);
    for (int i = 0; i < num; i++) {
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum;
}

// Function to add doubles
double add_double(int num, ...) {
    double sum = 0;
    va_list args;
    va_start(args, num);
    for (int i = 0; i < num; i++) {
        sum += va_arg(args, double);
    }
    va_end(args);
    return sum;
}

int main() {
    printf("Sum of integers: %d\n", add_int(3, 5, 10, 15));
    printf("Sum of doubles: %f\n", add_double(3, 3.5, 2.7, 1.2));

    return 0;
}

