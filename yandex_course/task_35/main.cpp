#include <iostream>
using namespace std;

int main() {
    int n, m, k, c = 0;
    cin >> n >> m;

    int ** matrix = new int * [n];
    for (int i = 0; i < n; i++){
        matrix[i] = new int[m];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    cin >> k;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m ; j++){
            if (matrix[i][j] == 0) {
                c++;
                if (c == k) {
                    cout << i + 1;
                    return 0;
                }
            } else {
                c = 0;
            }
        }
        c = 0;
    }

    cout << 0;

    return 0;
}
