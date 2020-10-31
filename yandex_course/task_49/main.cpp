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

bool IsPrime(int n){
    return MinDivisor(2, n) == n;
}

int main() {
    int a, n;
    cin >> n;

    if (IsPrime(n)){
        cout << "YES";
    } else cout << "NO";

    return 0;
}