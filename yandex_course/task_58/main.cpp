#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = " ";
    int l = 0, maxl = 0, p;
    getline(cin, s);
    //s = ' ' + s + ' ';

    for (int i = 0; i < s.size(); i++){
        if (s[i] == ' '){
            if (l > maxl) {
                maxl = l;
                p = i;
            }
            l = 0;
        } else l++;
    }

    if (l > maxl) {
        maxl = l;
        p = s.size();
    }

//    cout << maxl << endl << p << endl << p - maxl << endl;
//    cout << s << endl;
//    cout << "0123456789" << endl;

    for (int i = p - maxl; i < p; i++){
        cout << s[i];
    }

    return 0;
}
