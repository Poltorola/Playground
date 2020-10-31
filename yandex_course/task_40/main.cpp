#include <iostream>
using namespace std;

int main() {
    int n, m, a = 1, i = 0, j = 0;
    bool r = false, d = false;
    cin >> n >> m;

    /// creating matrix filled with '0'
    int ** matrix = new int * [n];
    for (int i = 0; i < n; i++){
        matrix[i] = new int [m];
        for (int j = 0; j < m; j ++){
            matrix[i][j] = 0;
        }
    }


    /// filling the matrix

    if (m*n == 1) {
        cout << 1;
        return 0;
    }

    while (a <= (n*m)){

        if (m > 1) {
            /// right =>
            while (j < m && matrix[i][j] == 0) {
                matrix[i][j] = a;
                a++;
                j++;
            }
            r = true;
            j--;
            i++;
        }

        if (n > 1) {
            /// down \/
            while (i < n && matrix[i][j] == 0) {
                matrix[i][j] = a;
                a++;
                i++;
            }
            d = true;
            i--;
            j--;
        }

        if (r && d) {
            /// left <=
            while (j >= 0 && matrix[i][j] == 0) {
                matrix[i][j] = a;
                a++;
                j--;
            }


            j++;
            i--;


            /// up /\               //
            while (matrix[i][j] == 0) {
                matrix[i][j] = a;
                a++;
                i--;
            }


            i++;
            j++;
        }

    }

    ////// print
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout.width(4);
            cout << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}
