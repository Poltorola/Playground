#include <iostream>
#include <cmath>
using namespace std;

// fabs is abs for double

bool IsPointInSquare(double x, double y){
    return (abs(x) + abs(y) <= 1);
}

int main() {
    double a, b;
    cin >> a >> b;

    if(IsPointInSquare(a,b)){
        cout << "YES";
    } else cout << "NO";

    return 0;
}
