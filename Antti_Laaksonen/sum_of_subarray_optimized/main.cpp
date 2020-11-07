#include <iostream>
using namespace std;

int main() {
    int size, max = 0, sum = 0;
    cin >> size;
    int * array = new int[size];
    for (int i = 0; i < size; i++){
        cin >> array[i];
    }
//    int * sums = new int[size];

    for (int i = 0; i < size; i++){
        if (sum + array[i] < array[i]){     /// if(sum > 0) sum += array[i] else sum = array[i];
            sum = array[i];
        } else {
            sum += array[i];            /// sum = max(sum + array[i], array[i])
        }

        if (max < sum) max = sum;       /// max = max(max, sum)
    }

//    max = sums[0];
//    for (int i = 0; i < size; i++){
//        if (sums[i] > max) max = sums[i];
//    }

    cout << max;

    return 0;
}
