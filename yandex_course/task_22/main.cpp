#include <iostream>
#include <vector>
using  namespace std;

int main() {
    int n, a, k = 0;
    cin >> n;

    vector <int> v(n);

    cin >> v[0];
    for (int i = 1; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 1; i < (n - n % 2); i += 2) {
        swap(v[i], v[i-1]);
    }
    //cout << n - n % 2 << endl;

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
