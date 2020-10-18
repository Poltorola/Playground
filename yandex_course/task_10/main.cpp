#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, x1, x2, D;
    cin >> a >> b >> c;

    if ( a == 0 && b == 0 && c == 0) {
        cout << 3;
        return 0;
    }
    if ((a == 0 && b == 0) && (c != 0)) {
        cout << 0;
        return 0;
    }
    if (a == 0 && b != 0){
        cout << 1 << " " << (-1 * c)/b;
        return 0;
    }

    D = b*b - 4*a*c;

    if (D > 0) {
        x1 = (-b + sqrt(D))/(2*a);
        x2 = (-b - sqrt(D))/(2*a);
        cout << 2 << " " << min(x1, x2) << " " << max(x1, x2);
    }
    if (D == 0) {
        x1 = (-b)/(2*a);
        cout << 1 << " " << x1;
    }
    if (D < 0) {
        cout << 0;
    }
    return 0;
}
