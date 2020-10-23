#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, patt, k;

    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    for (int j = 0; j < n; j++) {
        patt = v[j];
        k = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] == v[j]) {
                k++;
            }
        }
        if (k == 1) {
            cout << v[j] << " ";
        }

    }

    return 0;
}
