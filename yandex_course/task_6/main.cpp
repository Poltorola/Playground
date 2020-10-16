#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double p, x, y, xys, xyc, xyr, k;
    cin >> p >> x >> y >> k;

    xys = y + x * 100;   // start sum in c

    xyc = trunc(xys + p * xys / 100); // after one year in c

    for(int i = 0; i < k - 1; i++) {
        xyc = trunc(xyc + p * xyc / 100);
    }

    xyr = trunc(xyc / 100); // after k years in rub

    xyc = xyc - xyr * 100; // c without rub

    cout << xyr << " " << xyc;
    return 0;
}
