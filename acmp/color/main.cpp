#include <iostream>
#include <string>
using namespace std;

int main() {
    string coord;
    cin >> coord;

    if ((int)coord[0] % 2 != (int)coord[1] % 2){
        cout << "WHITE";
    } else cout << "BLACK";


    return 0;

}
