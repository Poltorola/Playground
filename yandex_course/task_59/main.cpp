#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, num;
    int points = 0;
    cin >> s;
//
//    if (s[0] == '.' || s[s.size() - 1] == '.'){   // .39.
//        cout << "NO";
//        return 0;
//    }

    for (auto c : s){
        if (c != '.'){                       // записываем все символы до точки

            if (!(c >= '0' && c <= '9')){   // если нам подсунули не цифру и не точку
                cout << "NO";
                return 0;
            }
            num += c;                       // если все ок добавляем новую цифру

            if (num[0] == '0' && num[num.size() - 1] != '0'){       // случай 000001
                cout << "NO";
                return 0;
            }

            if (num.empty()){
                cout << "NO";
                return 0;
            }

            int inum = stoi(num);
            if (!(inum >= 0 && inum <= 255)){  // сравниваем все число до точки с диапазоном
                cout << "NO";
                return 0;
            }

        } else {     // получили точку

            points++;     // считаем колво точек

            if (num.empty()){
                cout << "NO";
                return 0;
            }
            num = "";
        }
    }

    if (points != 3){  // неправильное колво точек
        cout << "NO";
        return 0;
    }

    cout << "YES";
    return 0;
}
