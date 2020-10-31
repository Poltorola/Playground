#include <iostream>
#include <set>
using namespace std;

int main() {
    set <int> m;
    int n, a;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a;
        m.insert(a);
    }

    cout << m.size();
    return 0;
}
