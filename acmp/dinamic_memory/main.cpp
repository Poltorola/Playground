#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;


void print_array(int * arr, int size){
    for (int i = 0; i < size; i++){
        cout.width(3);
        cout << arr[i];
    }
    cout << "\n";
}


void read_array(int * arr, int size){
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
}

void sort_array(int * arr, int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size - 1; j++){
            if (arr[j] > arr[j+1]) {
                int a = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = a;
            }
        }
    }
}


void do_smth(int * arr, int size, void (*foo)(int &a)){     // optimization of cycled functions
    for(int i = 0; i < size; i++){
        foo(arr[i]);
    }
}

void f(int &a){          // optimization of cycled functions
    cout.width(3);
    cout << a;
}

void g(int &a){          // optimization of cycled functions
    cin >> a;
}

int main() {
    int size;
    cin >> size;

    int * arr = new int[size];

//    read_array(arr, size);
//    print_array(arr, size);
//    do_smth(arr, size, g);        // instead of read_array
//    do_smth(arr, size, f);        // instead of print_array
    for_each(arr, arr + size, g);   // instead of do_smth
    for_each(arr, arr + size, f);   // instead of do_smth
    cout << "\n";
    sort_array(arr, size);
//    do_smth(arr, size, f);
    for_each(arr, arr + size, f);
    cout << "\n";
//    print_array(arr, size);

    delete[] arr;

    return 0;
}