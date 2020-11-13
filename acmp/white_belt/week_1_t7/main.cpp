#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int ctr = 0, it;
    cin >> s;

    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'f') {
            if (ctr == 1) it = i;
            ctr++;
        }
    }

    if (ctr == 0){
        cout << -2;
    } else if (ctr == 1){
        cout << -1;
    } else cout << it;

    return 0;
}
