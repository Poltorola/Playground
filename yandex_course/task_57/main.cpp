#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    bool p = true;
    cin >> s;

    for (int i = 0; i < s.size(); i++){
        if (s[i] != s[s.size() - 1 - i]){
            p = false;
        }
    }

    if (p) {
        cout << "yes";
    } else cout << "no";
    return 0;
}
