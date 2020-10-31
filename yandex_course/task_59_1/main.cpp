#include <iostream>
#include <string>
using namespace std;

bool not_number(char c){        // err.orr.255.255
    return !(c >= '0' && c <= '9');
}

bool zero(string num){      // 0255.001.023.01
    return (num[0] == '0' && num[num.size() - 1] != '0');
}

bool range(int inum){       // 256.256.256.256
    return !(inum >= 0 && inum <= 255);
}

bool point(int points){    // 255.255
    return (points != 3);
}

bool IP(string num){
    if (num.empty()){
        return true;
    }
    return zero(num) || range(stoi(num));
}


int main() {
    string s, num;
    int points = 0;
    cin >> s;

    for (auto c : s){
        if (c != '.'){
            if (not_number(c)){
                cout << "NO";
                return 0;
            }
            num += c;
        } else {
            points++;

            if (IP(num)){
                cout << "NO";
                return 0;
            }

            num = "";
        }
    }
    if (IP(num)){
        cout << "NO";
        return 0;
    }
    if (point(points)){
        cout << "NO";
        return 0;
    }

    cout << "YES";
    return 0;
}
