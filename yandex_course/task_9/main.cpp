#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, a, Px;
    int n;
    cin >> n >> x >> a;
    Px = a;

    for (int i = 0; i != n; i++){
        cin >> a;
        Px = Px*x + a;  // (a1)x + a2
    }

    //Px = round(Px*100)/100;
    cout << Px;
    return 0;
}
