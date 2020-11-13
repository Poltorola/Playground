#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool IsPalindrom(string word){
    for (int i = 0; i < word.size()/2; i++){
        //cout << i << " " << word.size() - 1 - i << "\n";
        if (word[i] != word[word.size() - 1 - i]) return false;
    }
    return true;
}

vector <string> PalindromFilter(vector <string> words, int minLength){
    vector <string> filtered;
    for (auto word : words){
        if (word.length() < minLength){
            continue;
        }
        if (IsPalindrom(word)){
            filtered.push_back(word);
        }
    }
    return filtered;
}

//
//int main() {
//    vector <string> words;
//    int minLength, n;
//    cin >> n >> minLength;
//
//    string str;
//    for (int i = 0; i < n; i++){
//        cin >> str;
//        words.push_back(str);
//    }
//
//     for(string & word: PalindromFilter(words, minLength)){
//         cout << word << endl;
//     }
//
////    for (int i = 0; i < n; i++){
////        cin >> words[i];
////    }
//
//    return 0;
//}
