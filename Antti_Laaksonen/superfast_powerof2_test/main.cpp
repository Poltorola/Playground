#include <iostream>
using namespace std;

bool power_of_two(unsigned long long x){
    if ((x & x-1) == 0){                // 4 = 100, 3 = 11;  1 0 0
        return true;                    //                 &   1 1
    }                                   //                   0 0 0  =>  x is power of 2
    return false;
}

int main() {
    unsigned long long x;
    cin >> x;
    //x = 1LL<<63;              // 9223372036854775808 -- this number is power of two! :)

    if (power_of_two(x)){
        cout << x << " -- this number is power of two! :)";
    } else cout << x << " -- this number is NOT power of two :(";

    return 0;
}
