// given an unsigned int, swap the bits in odd and even positions for 32 bit number

#include <iostream>

using namespace std;

unsigned int swapBits(unsigned int x) {
    unsigned int evenBits = x & 0b10101010101010101010101010101010;
    unsigned int oddBits = x & 0b01010101010101010101010101010101;

    evenBits >>= 1;
    oddBits <<= 1;
    return (evenBits | oddBits);
}

int main() {
    unsigned int a = 43;

    cout << a << endl;
    cout << swapBits(a) << endl;

    return 0;
}