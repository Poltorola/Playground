#include <iostream>
using namespace std;

double power(double a, int n){
    if (n == 0){
        return 1;
    }
    if (n > 0){
        return a*power(a, n - 1);
    }
    if (n < 0){
        return (1/a)*power(a, n + 1);
    }
}

int main() {
    int n;
    double a;
    cin >> a >> n;

    cout << power(a, n);
    return 0;
}
