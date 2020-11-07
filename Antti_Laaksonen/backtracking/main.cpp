#include <iostream>

using namespace std;

void decisions(int y, int n, int & decisions_ctr, bool * col, bool * diag1, bool * diag2){
    if (y == n){
        decisions_ctr++;
    } else {
        for (int x = 0; x < n; x++){
            if (col[x] || diag1[x + y] || diag2[n - 1 - y + x]) continue;
            col[x] = diag1[x + y] = diag2[n - 1 - y + x] = true;
            decisions(y + 1, n, decisions_ctr, col, diag1, diag2);
            col[x] = diag1[x + y] = diag2[n - 1 - y + x] = false;
        }
    }

}


int main() {
    const int n = 16;
    //cin >> n;
    bool * col = new bool[n];
    bool * diag1 = new bool[n*2 - 1];
    bool * diag2 = new bool[n*2 - 1];
    int decisions_ctr = 0;

    decisions(0, n, decisions_ctr, col, diag1, diag2);
    cout << decisions_ctr;
    return 0;
}
