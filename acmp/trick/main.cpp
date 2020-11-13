#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int  first = 1, second = 0, third = 0;
    cin >> s;

    for (char l : s)
    {
        if (l == 'A') swap(first, second);
        if (l == 'B') swap(third, second);
        if (l == 'C') swap(first, third);
    }

    if (first){
        cout << "1";
    }
    if (second){
        cout << "2";
    }
    if (third){
        cout << "3";
    }
    return 0;
}
