#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    while (a != 0 && b != 0){
        if (a < b) swap(a, b);
        a = a % b;
    }
    cout << b;

    /*
     * a : d  a = x * d
     * b : d  b = y * d
     *
     * <=> (a - b) : d  x * d - y * d = d * (x - y)
     * <=> (a + b) : d  x * d + y * d = d * (x + y)
     *
     * НОД(a, b) = d
     * НОД(a - b, b) = d1 = d = НОД(a, b)
     * НОД(19,13) = НОД(13,6) = НОД(7,6) = НОД(6, 1) = НОД(5, 1) = НОД(4, 1) = НОД(3, 1) = НОД(2, 1) = НОД(1, 1) = 1 = НОД(0, 1)
     *
     * НОД(0, х) = х
     *
     * a = x * b + r
     *
     * НОД(x * b + r, b) <=> НОД(a % b, b)
     * НОД(10, 5) = НОД(0, 5)
     *
     * a : d
     * b : d
     * a - b : d
     * d <= d1
     *
     * a - b : d1
     * b : d1
     * a : d1
     * d1 <= d
     *
     * d1 = d
     *
     * */

    return 0;
}
