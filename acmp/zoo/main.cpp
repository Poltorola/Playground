#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, lot, few;
    cin >> a >> b;

    few = max(a, b) / 2 + max(a, b) % 2;

    lot = min(a, b);

    cout << few << " " << lot;

    return 0;
}
