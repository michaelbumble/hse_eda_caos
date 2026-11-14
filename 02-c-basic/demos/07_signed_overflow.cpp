//   g++ -std=c++17 -O0 07_signed_overflow.cpp -o 07_O0
//   g++ -std=c++17 -O3 07_signed_overflow.cpp -o 07_O3


#include <climits>
#include <iostream>

int main() {
    volatile int x = INT_MAX;

    if (x + 1 > x) {
        std::cout << "no signed overflow\n";
    } else {
        std::cout << "signed overflow happened\n";
    }
}
