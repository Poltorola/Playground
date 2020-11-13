#include <iostream>
using namespace std;

int main() {
   int size, yes = 0, no = 0;
   cin >> size;
   int * array = new int[size];

   for (int i = 0; i < size; i++){
       cin >> array[i];
   }

    for (int i = 0; i < size; i++){
        if (array[i] % 2 == 1) {
            cout << array[i] << " ";
            no++;
        }
    }
    cout << endl;
    for (int i = 0; i < size; i++){
        if (array[i] % 2 == 0) {
            cout << array[i] << " ";
            yes++;
        }
    }
    cout << endl;

    if (yes < no) {
        cout << "NO";
    } else cout << "YES";

    return 0;
}
