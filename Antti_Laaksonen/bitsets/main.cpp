#include <iostream>
using namespace std;


bool set_intersection(unsigned long long A, unsigned long long B){
    if ((A & B) == 0) {
        return false;
    }
    return true;
}


bool subset(unsigned long long L, unsigned long long S){
    if ((L | S) == L){
        return true;
    }
    return false;
}


unsigned long long int read_bitset(){
    int a, size;
    unsigned long long S = 0;
    cin >> size;
    for (int i = 0; i < size; i++){
        cin >> a;
        S |= 1LL<<a;
    }

    return S;
}


void print_bitset(unsigned long long S){
    for (int k = 0; k < 63; k++){
        if (S & (1LL<<k)) {
            cout << "1 ";
        } else cout << "0 ";
    }
    cout << endl;
}


int main() {
   unsigned long long A = 0;
   unsigned long long B = 0;

   A = read_bitset();
   print_bitset(A);
   B = read_bitset();
   print_bitset(B);

   if (set_intersection(A, B)){
       cout << "A and B have common element(s)\n";
   } else cout << "No common element(s)\n";

   if (subset(A, B)){
       cout << "B is subset of A\n";
   } else cout << "B is NOT subset of A\n";

    if (subset(B, A)){
        cout << "A is subset of B\n";
    } else cout << "A is NOT subset of B\n";

    return 0;
}