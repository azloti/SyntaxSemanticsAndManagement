#include <iostream>

class Wrapper {
public:
    int value;
    Wrapper(int val) : value(val) {}
}

void printValue(const Wrapper* obj) { // Pass by pointer (read-only)
    std::cout << "Value: " << obj->value << std::endl;
}

int main() {
    Wrapper *obj = new Wrapper(100); // Heap allocation
    printValue(obj); // Passp ointer
    std::cout << "Still accessible" << obj->value << std::endl;
    delete obj; // Manual deallocation
}