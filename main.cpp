#include <iostream>

void print_one() {
    std::cout << "One\n";
}

void print_not_one() {
    std::cout << "Not one\n";
}

int main(void) {
    int i = 0;
    if(i == 1) {
        print_one();
    } else {
        print_not_one();
    }
    std::cout << "Hello world!\n";
}
