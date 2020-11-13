#include <iostream>
using namespace std;

int main() {
    int n, sum;
    cin >> n;
    sum = n;

    for (int i = n/2; i > 0; i--){
        if (n % i == 0) sum += i;
    }

    cout << sum;// << endl << sum - n;

    return 0;
}
