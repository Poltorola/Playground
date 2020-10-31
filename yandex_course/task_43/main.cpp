#include <iostream>
using namespace std;

bool IsPointInSquare(double x, double y){
    return (x <= 1 && x >= -1 && y <= 1 && y >= -1);
}


int main() {
    double a, b;
    cin >> a >> b;
    if (IsPointInSquare(a, b)){
        cout << "YES";
    }else cout << "NO";
    return 0;
}
