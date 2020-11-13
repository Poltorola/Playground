#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, mid = 0;
    cin >> n;
    vector <int> temperatures(n);
    vector <int> nice_days;

    for (int i = 0; i < n; i++){
        cin >> temperatures[i];
        mid += temperatures[i];
    }
    mid /= n;

    for (int i = 0; i < n; i++){
        if (temperatures[i] > mid) nice_days.push_back(i);
    }

    cout << nice_days.size() << endl;
    for (auto it : nice_days){
        cout << it << " ";
    }

    return 0;
}
