#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int ** matrix1 = new int * [n];
    for (int i = 0; i < n; i++){
        matrix1[i] = new int[m];
    }

//    int ** matrix2 = new int * [m];
//    for (int i = 0; i < m; i++){
//        matrix1[i] = new int[n];
//    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matrix1[i][j];
        }
    }

//// Transpose
    cout << "\nTransposed\n";

    for (int j = 0; j < m; j++){
        for (int i = 0; i < n; i++){
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

//// Mirrored
    cout << "\nMirrored\n";

    for (int i = 0; i < n; i++){
        for (int j = m-1; j >= 0; j--){
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }


//// Transposed + Mirrored
    cout << "\n\nCombo\n";

    for (int j = 0; j < m; j++){
        for (int i = n - 1; i >= 0; i--){
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}


