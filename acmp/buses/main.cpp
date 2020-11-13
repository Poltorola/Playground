#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool letter(char c){
    vector<char> letters = {'A', 'B', 'C', 'E', 'H', 'K', 'M', 'O', 'P', 'T', 'X', 'Y'};
    for (char l : letters){
        if (c == l) return true;
    }
    return false;
}

bool number(char c){
    return c >= '0' && c <= '9';
}


int main() {

    string num;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> num;
        if (num.length() != 6){
            cout << "No\n";
            continue;
        }
        if (letter(num[0]) && number(num[1]) &&
            number(num[2]) && number(num[3]) &&
            letter(num[4]) && letter(num[5])){
            cout << "Yes\n";
        } else cout << "No\n";
    }

    return 0;
}
