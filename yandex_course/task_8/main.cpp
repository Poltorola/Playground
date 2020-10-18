#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double n, s = 0, i = 0, q;

    cin >> n;
    while (n) {
        s = s + n;
        i++;
        q = q + n*n;

        cin >> n;
    }

    q = sqrt((q - s*s/i)/(i - 1));
    s = s / i;

    cout << setprecision(11) << fixed;
    cout << q;

        return 0;
}