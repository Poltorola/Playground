#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double p, x, y, xys, xyk, xyr;
    cin >> p >> x >> y;

    xys = y + x*100;   // start sum in k

    xyk = trunc(xys + p*xys/100); // after year in k

    xyr = trunc(xyk/100); // after year in rub

    xyk = xyk - xyr*100; // k without rub

    cout << xyr << " " << xyk;
    return 0;
}
