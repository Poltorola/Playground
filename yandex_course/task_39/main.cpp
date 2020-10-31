#include <iostream>
using namespace std;

int main() {
    int n, m, i, j, a = 1;
    cin >> n >> m;

    int ** matrix = new int * [n];
    for (int i = 0; i < n; i++){
        matrix[i] = new int[m];
    }

    /////////

    i = 0;                          // blue top
    j = 0;
    for (int top = 0; top < m; top++){
        j = top;
        i = 0;
        while (i < n && j >= 0){
            matrix[i][j] = a;
            i++;
            j--;
            a++;
        }
    }
    i = 1;                        // purple right
    j = m - 1;
    for (int right = 1; right < n; right++){
        i = right;
        j = m - 1;
        while (i < n && j >= 0){
            matrix[i][j] = a;
            i++;
            j--;
            a++;
        }
    }

    /////

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout.width(4);
            cout << matrix[i][j];
        }
        cout << endl;
    }


    return 0;
}
