#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x, y;

   vector <int> v(16);

   for (int i = 0; i < 16; i++){
       cin >> v[i];
   }

   for (int j = 0; j < 14; j += 2){
       x = v[j];
       y = v[j + 1];
       for (int i = j + 2; i < 16; i += 2){
           if (x == v[i] || y == v[i+1] ||
               abs(v[i] - x) == abs(v[i+1] - y) )
           {
               cout << "YES";
               return 0;
           }
       }
   }

    cout << "NO";
    return 0;
}
