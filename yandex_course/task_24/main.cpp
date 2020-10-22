#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, patt, k = 0, i;

    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    for (int j = 0; j < n; j++) {
        patt = v[j];
        for (int i = j + 1; i < n; i++) {
            if (v[i] == v[j]) {
                k++;
            }
        }
    }

    cout << k;
    return 0;
}
