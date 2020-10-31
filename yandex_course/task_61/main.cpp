#include <iostream>
#include <set>
using namespace std;

int main() {
    set <int> m;
    int n, a;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a;
        if (m.find(a) == m.end()){
            cout << "NO\n";
            m.insert(a);
        } else cout << "YES\n";
    }

    return 0;
}
