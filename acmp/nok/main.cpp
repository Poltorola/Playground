#include <iostream>
using namespace std;

int main() {
    int a = 1000000000, b = 999999999;
    cin >> a >> b;


    while (a != 0 && b != 0){
        if (a > b){
            a = a % b;
        } else b = b % a;
    }

    cout << max(a, b);

    return 0;
}
