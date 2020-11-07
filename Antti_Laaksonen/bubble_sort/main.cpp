// I SHOULD NOT MESS WITH DEADLINE
// I SHOULD NOT MESS WITH DEADLINE
// I SHOULD NOT MESS WITH DEADLINE

#include <iostream>
using namespace std;

int main() {
    int size, timer = 0;
    cin >> size;
    int * array = new int[size];
    for (int i = 0; i < size; i++){
        cin >> array[i];
    }

    for (int i = 0; i < size; i++){
        for (int j = 1; j < size; j++){
            if (array[j] < array[j-1]) {
                swap(array[j], array[j-1]);
                timer++;
            }
        }
    }

    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << "\ninversions: " << timer;

    return 0;
}
