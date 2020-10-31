#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // выделение памяти под таблицу
    int ** arr = new int*[n]; // создаем указатель на массив указателей
    for (int i = 0; i < n; i++){
        arr[i] = new int[n]; // заполняем массив указателей указателями на одномерные массивы
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            arr[i][j] = abs(i - j);
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

