#include <iostream>

using namespace std;

unsigned gcd(unsigned a, unsigned b){   // great common divisor
    if (b > a) return gcd(b, a);
    if (b == 0) return a;
    return gcd(b, a % b);
}


int main() {

    return 0;
}

