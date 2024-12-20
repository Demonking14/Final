#include <stdio.h>
#include <string.h>

void bufferOverflow() {
    char buffer[10];
    // Copying more characters than the buffer can hold
    strncpy(buffer, "This string is too long for the buffer!");
    printf("Buffer content: %s\n", buffer);
}

int main() {
    bufferOverflow();
    return 0;
}
