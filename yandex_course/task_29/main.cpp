#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    char ** arr = new char*[n];
    for (int i = 0; i < n; i++){
        arr[i] = new char[n];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            arr[i][j] = '.';
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            if (i == j || 2*i == (n-1) || 2*j == (n-1) ||
                (i + j) == n - 1){
                arr[i][j] = '*';
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
