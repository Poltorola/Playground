#include <iostream>
#include <string>
using namespace std;

bool IsPalindrom(string word){
    for (int i = 0; i < word.size()/2; i++){
        //cout << i << " " << word.size() - 1 - i << "\n";
        if (word[i] != word[word.size() - 1 - i]) return false;
    }
    return true;
}

int main() {
    string word;
    cin >> word;

    if (IsPalindrom(word)){
        cout << "true";
    } else cout << "false";

    return 0;
}
