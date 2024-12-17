#include <iostream>

class Example {
public:
    Example(int size) {
        data = new int[size]; // Allocating memory
    }

    ~Example() {
        // Destructor does not release allocated memory
        // Memory leak occurs
    }

private:
    int* data;
};

int main() {
    Example* obj = new Example(10);
    // Memory allocated but not freed
    return 0;
}
