//
// Created by k3l on 18.03.2020.
//

#include <iostream>
#include <random>
//#include <chrono>
#define ull unsigned long long

using namespace std;


int main(){
    cout.sync_with_stdio(false);
    cin.sync_with_stdio(false);
    ull population_count = 10E+8;
    int max_age = 200;
    cout << population_count << " " << max_age << "\n";
    for(ull i = 1; i < population_count / 2; i++){
        cout <<  1 << " ";
    }
    cout << 100 << " ";
    for(ull i = 1; i < population_count /2; i++){
        cout << (rand() / 170) + 20 << " ";
    }
    cout.flush();
    return 0;
}

