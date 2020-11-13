#include <iostream>
using namespace std;

int main() {
    int n, age, sex, it = -1, max = 0;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> age >> sex;
        if (sex == 1) {
            if (max < age) {
                max = age;
                it = i+1;
            }
        }
    }
    cout << it;

    return 0;
}
