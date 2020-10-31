#include <iostream>
using namespace std;

int fib(int n){
    if (n != 1 && n != 2) {
            return fib(n - 1) + fib(n - 2);
    } else {
        return 1;
    }
}

int main() {
    int n;
    cin >> n;

    cout << fib(n);
    return 0;
}

// 1 1 2 3 5 8 13
// 1 2 3 4 5 6 7