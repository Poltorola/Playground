#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int ** matrix1 = new int * [n];
    for (int i = 0; i < n; i++){
        matrix1[i] = new int[m];
    }

    int ** matrix2 = new int * [m];
    for (int i = 0; i < m; i++){
        matrix2[i] = new int[n];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matrix1[i][j];
        }
    }

//// Transposed

    for (int j = 0; j < m; j++){
        for (int i = 0; i < n; i++){
            matrix2[j][i] = matrix1[i][j];
        }
    }

//// Mirrored
    //cout << "\nMirrored\n";

    for (int i = 0; i < m; i++){
        for (int j = n-1; j >= 0; j--){
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


