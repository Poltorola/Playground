#include <iostream>
using namespace std;

int main() {
    int first, second, num;
    cin >> first >> second >> num;

    cout << first + (num - 1)*(second - first);

    return 0;
}
