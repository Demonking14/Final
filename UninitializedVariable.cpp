#include <stdio.h>

int main() {
    int x; // Uninitialized variable
    int y = x + 10; // ERROR: Using uninitialized variable
    printf("Value of y: %d\n", y);

    return 0;
}
