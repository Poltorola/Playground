#include <iostream>

using namespace std;


int main() {
    cin.sync_with_stdio(false);             // turn off synchronization between cin and scanf for time optimization
    cout.sync_with_stdio(false);

    long long unsigned number;
    cin >> number;
    int max_age;
    cin >> max_age;

    int median = 0;
    int * arr_med = new int[max_age];   // count frequency of ages
    long long unsigned sum = 0;

    int age;

    for (long long unsigned i = 0; i < number; i++){
        cin >> age;
        sum += age;
        arr_med[age]++;
    }

    double arithmetic_mean = (double) sum / (double) number;

    long all = 0;
    for (int j = 0; j < max_age; j++){
        all += arr_med[j];
        if (number / 2 < all) {
            median = j;
            break;
        }
    }

    cout << "median: " << median << endl << "arithmetic mean: " << arithmetic_mean << endl;


    return 0;
}