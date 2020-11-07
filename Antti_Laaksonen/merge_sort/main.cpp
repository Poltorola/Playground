#include <iostream>
using namespace std;


int * merge(int * array1, int size1, int * array2, int size2){
    int size = size1 + size2, i1 = 0, i2 = 0, i = 0;
    int * result_array = new int[size];

    while (i1 < size1 && i2 < size2){
        if (array1[i1] < array2[i2]) {
            result_array[i] = array1[i1];
            i1++;
        } else {
            result_array[i] = array2[i2];
            i2++;
        }
        i++;
    }

    for(; i1 < size1; i1++){
        result_array[i] = array1[i1];
        i++;
    }
    for(; i2 < size2; i2++){
        result_array[i] = array2[i2];
        i++;
    }
    return result_array;
}



void merge_sort(int start, int end, int * array, int lvl = 0){
    if (start == end) return;
    int middle = (start + end)/2;
    lvl++;
    merge_sort(start, middle, array, lvl);
    merge_sort(middle + 1, end, array, lvl);
    lvl--;

    cout << lvl << "\n";
    cout << "merge from " << start << " to " << middle << " and from " << middle + 1 << " to " << end << "\n";
    cout << "merge(" << start << ", " << middle - start + 1 << ", " << middle << ", " << end - middle << ")\n";
    int * parts = merge(array + start, middle - start + 1,
                    array + middle, end - middle);
    for (int i = start; i <= end; i ++){
        array[i] = parts[i];
    }
}


int main() {
    int size;
    cin >> size;
    int * array = new int[size];
    for (int i = 0; i < size; i++){
        cin >> array[i];
    }

    merge_sort(0, size, array);

    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    return 0;
}