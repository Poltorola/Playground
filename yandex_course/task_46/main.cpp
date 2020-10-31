#include <iostream>
#include <cmath>
using namespace std;

bool IsPointInCircle(double x, double y, double xc, double yc, double r){
    return (pow(y - yc, 2) + pow(x - xc, 2) <= pow(r, 2));
}

bool IsPointUpLine(double x, double y, double k, double b){
    return (y >= k*x + b);
}

bool IsPointDownLine(double x, double y, double k, double b){
    return (y <= k*x + b);
}

bool IsPointOutOfCircle(double x, double y, double xc, double yc, double r){
    return (pow(y - yc, 2) + pow(x - xc, 2) >= pow(r, 2));
}

bool IsPointInArea(double x, double y){
    return (IsPointInCircle(x, y, -1, 1, 2)
            && IsPointUpLine(x, y, 2, 2)
            && IsPointUpLine(x, y, -1, 0)
            ||
            IsPointOutOfCircle(x, y, -1, 1, 2)
            && IsPointDownLine(x, y, 2, 2)
            && IsPointDownLine(x, y, -1, 0));
}

int main() {
    double x, y;
    cin >> x >> y;

    if (IsPointInArea(x, y)){
        cout << "YES";
    } else cout << "NO";
    return 0;
}
