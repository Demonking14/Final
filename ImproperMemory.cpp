#include <stdlib.h>

int main() {
    char* buffer = (char*)malloc(100 * sizeof(char));

    if (!buffer) {
        return -1; // Failed allocation
    }

    free(buffer);
    free(buffer); // ERROR: Double free vulnerability

    return 0;
}
