#include <iostream>
using namespace std;

int Factorial(int x){
    int f = 1;
    for (int i = 1; i <= x; i++){
        f *= i;
    }
    return f;
}

int main() {
    int x;
    cin >> x;

    cout << Factorial(x);

    return 0;
}
