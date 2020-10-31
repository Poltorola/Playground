#include <iostream>
using namespace std;

int main() {
    int rows, cols, c1, c2;

    cin >> rows >> cols;

    int ** arr = new int * [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cin >> c1 >> c2;
    for (int i = 0; i < rows; i++){
        swap(arr[i][c1], arr[i][c2]);
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
