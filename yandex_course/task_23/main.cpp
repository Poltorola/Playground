#include <iostream>
#include <vector>
using  namespace std;

int main() {
    int n, prev = 0, cur = 0;
    cin >> n;

    vector <int> v(n);

    for (int i = 1; i < n; i++) {
        cin >> v[i];
    }
    cin >> v[0];

    /// if I wasn't a cheater
//
//    prev = v[0];
//    for (int i = 1; i < n ; i++) {
//        cur = v[i];
//        v[i] = prev;
//        prev = cur;
//    }
//    v[0] = prev;

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
