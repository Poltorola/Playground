#include <iostream>
using namespace std;

double degree(double a, int n){
    if (n != 0){
        if (n % 2 == 0){
            return degree(a*a, n/2);
        } else {
            return a*degree(a, n-1);
        }
    } else return 1;
}

int main() {
    double a;
    int n;
    cin >> a >> n;

    cout << degree(a, n);
    return 0;
}
