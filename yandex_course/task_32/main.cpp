#include <iostream>
using namespace std;

int main() {
    int n;
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

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (matrix[i][j] != matrix[j][i]){
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";

    return 0;
}
