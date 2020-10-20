#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, e, f, x, y;     // ax + by = e
    cin >> a >> b >> c >> d >> e >> f; // cx + dy = f

    /// no roots
    if (( (a + b) == 0 && e != 0) ||   // 0 = e
        ( (c + d) == 0 && f != 0) ||   // 0 = f
        ( (a + b + c + d) != 0) && ( (a*d - b*c) == 0)) // !E x, y           //
    {


    }

    /// endless roots
    if ( (a + b + c + d + e + f) == 0 )

    /// roots without method
    if ((a + c == 0 && b*d != 0)){

    }

    /// all is ok
    if () {
        x = (e * d - b * f) / (a * d - b * c);
        y = (a * f - c * e) / (a * d - b * c);

        cout << x << " " << y;
    }

    return 0;
}
