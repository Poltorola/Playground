#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k, a, b;
    cin >> n >> k;

    vector <char> kegls(n, 'I');

    for (int i = 0; i < k; i++){
            cin >> a;
            cin >> b;
        for (int j = a - 1; j <= b - 1; j++){
                kegls[j] = '.';

        }
    }

    cout << endl;
    for (char c : kegls) {
        cout << c;
    }
    return 0;
}
