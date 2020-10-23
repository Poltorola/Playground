#include <iostream>
using namespace std;

int main() {
    int n, m, max, x = 0, y = 0;
    cin >> n >> m;

    int ** arr = new int*[n];
    for (int i = 0; i < n; i++){
        arr[i] = new int[m];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    max = arr[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            if (arr[i][j] > max){
                max = arr[i][j];
                x = i;
                y = j;
            }
        }
    }

    cout << x << " " << y;
    return 0;
}
