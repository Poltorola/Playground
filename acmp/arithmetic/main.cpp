#include <iostream>
using namespace std;

int main() {
    int size, positive = 0, composition = 1;
    cin >> size;

    int * array = new int [size];

    for (int i = 0; i < size; i++){
        cin >> array[i];
        if (array[i] > 0) positive += array[i];
    }

    int MAX = array[0], imax = 0;
    int MIN = array[0], imin = 0;
    for (int i = 0; i < size; i++){
        if (MAX < array[i]) {
            MAX = array[i];
            imax = i;
        }
        if (MIN > array[i]){
            MIN = array[i];
            imin = i;
        }
    }

    for (int i = min(imax, imin) + 1; i < max(imax, imin); i++){
        composition *= array[i];
    }

    cout << positive << " " << composition;

    return 0;
}
