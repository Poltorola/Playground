#include <iostream>

using namespace std;

void from_A_up_to_B_1(int a, int b){
    if (b < a) return;
    from_A_up_to_B1(a, b - 1);
    cout << b << " ";
}

void from_A_up_to_B_2(int a, int b){
    if (b < a) return;
    cout << a << " ";
    from_A_up_to_B2(a + 1, b);
}

void reverse(){                   // reversing sequence
    int a;
    cin >> a;
    if (a == 0) return;
    reverse();
    cout << a << " ";
}


int c_n_k(int n, int k) {            // Newton`s binomial
    if (k == 0) return 1;
    if (n == k) return 1;
    return c_n_k(n - 1, k - 1) + c_n_k(n - 1, k);
}



int main() {
    from_A_up_to_B_1(3, 5);
    cout << "\n";
    from_A_up_to_B_2(3, 5);
    return 0;
}