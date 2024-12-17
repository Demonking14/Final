#include <stdio.h>
#include <string.h>

void bufferOverflow() {
    char buffer[10];
    // Copying more characters than the buffer can hold
    strcpy(buffer, "This string is too long for the buffer!");
    printf("Buffer content: %s\n", buffer);
}

int main() {
    bufferOverflow();
    return 0;
}
