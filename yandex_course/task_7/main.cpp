#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n, s = 0, i = 0, m;

    cin >> n;
    while (n) {
        s = s + n;
        i++;
        cin >> n;
    }
    m = s / i;

    cout << setprecision(11) << fixed;
    cout << m;
    return 0;
}
