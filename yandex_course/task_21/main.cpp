#include <iostream>
#include <vector>
using  namespace std;

int main() {
    int n, a, k = 0;
    cin >> n;

    vector <int> v(n);

    cin >> v[0];
    for (int i = 1; i < n; i++){
        cin >> v[i];
        if ( v[i] != v[i - 1] ) {
            k++;
        }
    }

    cout << k + 1;
    return 0;
}
