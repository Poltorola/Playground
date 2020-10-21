#include <iostream>
#include <vector>
using  namespace std;

int main() {
    int n, f = 0;
    cin >> n;

    vector <int> a(n);

    cin >> a[0];
    for (int i = 1; i < n; i++){
        cin >> a[i];
        if ( (a[i]*a[i - 1]) > 0 && f == 0) {
            cout << min(a[i], a[i-1]) << " "
                 << max(a[i-1], a[i]);
            f++;
        }
    }

    return 0;
}
