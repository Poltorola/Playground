#include <iostream>
#include <cmath>
using namespace std;

bool IsPointInCircle(double x, double y, double xc, double yc, double r){
    return(pow(y - yc, 2) + pow(x - xc, 2) <= pow(r, 2));
}

int main() {
    double a, b, ak, bk, p;
    cin >> a >> b >> ak >> bk >> p;

    if (IsPointInCircle(a, b, ak, bk, p)){
        cout << "YES";
    } else cout << "NO";
    return 0;
}
