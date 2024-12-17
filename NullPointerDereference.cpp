#include <iostream>

struct Node {
    int data;
    Node* next;
};

void printNodeData(Node* node) {
    // Potential null pointer dereference
    if (node->data == 0) { // ERROR: Accessing `node` without checking if it is null
        std::cout << "Node data is zero.\n";
    }
}

int main() {
    Node* node = nullptr;
    printNodeData(node); // Passes a null pointer
    return 0;
}
