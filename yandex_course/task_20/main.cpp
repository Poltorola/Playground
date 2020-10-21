#include <iostream>
#include <vector>
using  namespace std;

int main() {
    int n, a, min = 0, k = 0;
    cin >> n;

    vector <int> v;

    for (int i = 0; i < n; i++){
        cin >> a;
        if ( a % 2 != 0 ) {
            v.push_back(a);
            k++;
        }
    }
    if (k != 0) {
        min = v[0];
        for (int j : v) {
            if (j < min) {
                min = j;
            }
        }
    }

    cout << min;
    return 0;
}
