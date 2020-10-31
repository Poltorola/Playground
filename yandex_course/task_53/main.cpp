#include <iostream>
#include <string>
using namespace std;

int main() {
    char c;
    cin >> c;

    if ((int) c >= (int) '0' && (int) c <= '9'){
        cout << "yes";
    } else cout << "no";
    return 0;
}
