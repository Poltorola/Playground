#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    cout << n*(m/k) + n*(k-1);

    return 0;
}
