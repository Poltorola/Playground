#include <iostream>
using namespace std;

int main() {
    int n, m, c = 0, a = 1;
    cin >> n >> m;

    int ** matrix = new int * [n];
    for (int i = 0; i < n; i++){
        matrix[i] = new int[m];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if ( (i + j) % 2 != 1){
                matrix[i][j] = a;
                a++;
            } else {
                matrix[i][j] = 0;
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
