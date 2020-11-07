#include <iostream>
#include <vector>

using namespace std;

void search(int n, vector <int> & permutation, bool * chosen){
    if (permutation.size() == n){
        for (int a : permutation){
            cout << a << " ";
        }
        cout << "\n";
    } else {
        for (int i = 1; i <= n; i++){
            if (chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search(n, permutation, chosen);
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector <int> permutation;

    bool * chosen = new bool[n+1];

    search(n, permutation, chosen);

    return 0;
}
