#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int size, n, ctr = 0, prevs;
    cin >> size >> n;
    vector <int> pairs(n);

    for (int i = 0; i < n; i++){
        cin >> pairs[i];
    }

    sort(pairs.begin(),pairs.end());

    prevs = size - 3;
    for (auto s : pairs){
        if (s >= size && s - prevs > 2){
            ctr++;
            prevs = s;
        }
    }

    cout << ctr;
    return 0;
}
