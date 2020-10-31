#include <iostream>
#include <string>
using namespace std;

int main() {
    char C, c;
    cin >> c;

    if (c >= 'a' && c <= 'z'){
        C = c - ('z' - 'a') - 7;
        cout << C;
    } else cout << c;

    return 0;
}
