#include <iostream>
using namespace std;

int main() {
    int size, max, sum;
    cin >> size;
    int * array = new int[size];
    for (int i = 0; i < size; i++){
        cin >> array[i];
    }

    max = array[0];
    sum = max;

    int c = 0;

    for (int s = 0; s < size; s++){
        sum = array[s];
        c++;
        for (int k = s+1; k < size; k++){
            c++;
            if (max < sum) max = sum;
            sum += array[k];
        }
        if (max < sum) max = sum;
    }

    cout << max << "\n";
    cout << c;
    return 0;
}
