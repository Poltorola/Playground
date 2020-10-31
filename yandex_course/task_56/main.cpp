#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 0;
    string s;

    getline(cin, s);
    for (auto c : s){
        if (c == ' '){
            n++;
        }
    }
    cout << n + 1;
    return 0;
}
