#include <iostream>
using namespace std;

int sum(){
    int a;
    cin >> a;
    if (a != 0){
        return a + sum();
    }
    return a;
}

int main() {
    cout << sum();
    return 0;
}
