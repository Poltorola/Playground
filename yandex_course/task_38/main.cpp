#include <iostream>
using namespace std;

int main() {
    int n, m, a = 1;
    cin >> n >> m;

    int ** matrix = new int * [n];
    for (int i = 0; i < n; i++){
        matrix[i] = new int[m];
    }

    for (int i = 0; i < n; i++){
        if (i % 2 == 0){
            for (int j = 0; j < m; j++){
                matrix[i][j] = a;
                a++;
            }
        } else{
            for (int j = m - 1; j >= 0; j--){
                matrix[i][j] = a;
                a++;
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout.width(4);
            cout << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
    }