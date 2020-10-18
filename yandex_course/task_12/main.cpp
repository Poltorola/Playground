#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, e, f, x, y;     // ax + by = e
    cin >> a >> b >> c >> d >> e >> f; // cx + dy = f

    x = (e*d - b*f)/(a*d - b*c);
    y = (a*f - c*e)/(a*d - b*c);

    cout << x << " " << y;

    return 0;
}
