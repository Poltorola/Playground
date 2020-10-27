#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;


    int ** matrix = new int * [n];
    for (int i = 0; i < n; i++){
        matrix[i] = new int[n];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    cin >> k;

    if (k > 0) {
        for (int i = 0; i < n - k; i++) {
                cout << matrix[i + k][j] << " ";
                cout.flush();
                j++;
        }
    } else {
        for (int j = 0; j < n + k; j++) {
            cout << matrix[i][j - k] << " ";
            cout.flush();
            i++;
            }
    }


    return 0;
}
