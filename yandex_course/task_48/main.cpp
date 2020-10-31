#include <iostream>
#include <cmath>
using namespace std;

int MinDivisor(int a, int n){
    if (a <= sqrt(n)){
        if (n % a == 0) {
            return a;
        }
        return MinDivisor(a+1, n);
    }
    return n;
}

int main() {
    int a, n;
    cin >> n;

    cout << MinDivisor(2, n);
    return 0;
}