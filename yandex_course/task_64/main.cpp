#include <iostream>
#include <map>
using  namespace  std;

int main() {
    map <string, string> vocabulary;
    int n;
    string s1, s2, word;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> s1 >> s2;
        vocabulary[s1] = s2;
        vocabulary[s2] = s1;
    }
    cin >> word;
    cout << vocabulary[word];

    return 0;
}
