#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, x1, x2, d;
    cin >> a >> b >> c;

    // 0 = 3
    if (a == 0 && b == 0 && c != 0) {
        return 0;
    }

    // 4x = 0 || 2x*x = 0
    if (a == 0 && b != 0 && c == 0 || a != 0 && b == 0 && c == 0) {
        cout << 0;
        return 0;
    }

    // 0 + 4x + 10 =  0
    if (a == 0 && b != 0 && c != 0){
        cout << -c/b;
        return 0;
    }

    d = b * b - 4 * a * c;

    if (d < 0) {
        return 0;
    } else if (d == 0) {
        cout << -b / (2 * a);
    } else {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << x1 << " " << x2;
    }

    return 0;
}
