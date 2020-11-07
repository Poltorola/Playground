#include <iostream>
#include <vector>

using namespace std;


void subsets(int curr, int & size, vector<int> & subset){
    if (curr == size + 1){
        if(subset.size() == 0){
            cout << "Empty set";
        }
        for (int a : subset){
            cout << a << " ";
        }
        cout << "\n";
    } else {
        subset.push_back(curr);
        subsets(curr+1, size, subset);
        subset.pop_back();
        subsets(curr+1, size, subset);
    }
}

int main() {
    vector <int> subset;
    int size;
    cin >> size;

    subsets(1, size, subset);

    return 0;
}
