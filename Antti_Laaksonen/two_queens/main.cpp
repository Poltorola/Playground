#include <iostream>
using namespace std;

int main() {
    int size, decisions = 0;
    cin >> size;

    for (int i = 0; i < size; i++){     // cols
        for (int j = 0; j < size; j++){     // rows
            for (int k = 0; k < size; k++){     // cols2
                for (int l = 0; l < size; l++){     // rows2
                    if ((i != k) && (j != l) && (i+j != k+l) && i != j && k != l){
                        decisions++;
                    }
                }
            }
        }
    }
    cout << decisions;

    return 0;
}
