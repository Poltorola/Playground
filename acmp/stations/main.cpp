#include <iostream>
using namespace std;

int main() {
    int n, i, j, fw, sw;
    cin >> n >> i >> j;

    fw = max(i, j) - min(i, j);
    sw = n - max(i, j) + min(i, j);

    cout << min(fw, sw) - 1;

    return 0;
}
