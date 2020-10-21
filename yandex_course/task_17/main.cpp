#include <iostream>
#include <vector>
using  namespace std;

int main() {
    int n, k = 0;
    cin >> n;

    vector <int> a(n);

    cin >> a[0];
    for (int i = 1; i < n; i++){
        cin >> a[i];
        if (a[i] > a[i - 1]) {
            cout << a[i] << " ";
        }
    }

    return 0;
}
