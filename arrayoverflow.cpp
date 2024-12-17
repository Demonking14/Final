#include <iostream>

void arrayOverflow() {
    int arr[5] = {1, 2, 3, 4, 5};
    // Accessing an out-of-bounds index
    for (int i = 0; i <= 5; i++) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }
}

int main() {
    arrayOverflow();
    return 0;
}
