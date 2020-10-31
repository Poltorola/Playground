#include <iostream>
#include <string>
using namespace std;

int main() {
    char c;
    cin >> c;

    if (c >= 'a' && c <= 'z'){
        cout << char (c - ('a' - 'A'));
    } else if (c >= 'A' && c <= 'Z'){
        cout << char (c + ('a' - 'A'));
    } else {
        cout << c;
    }
    return 0;
}
