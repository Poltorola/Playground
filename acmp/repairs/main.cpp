#include <iostream>
using namespace std;

int main() {
    int l, w, h, n;
    cin >> l >> w >> h;

    n = 2*(w*h + l*h);

    cout << (n + 15) / 16;

    return 0;
}
