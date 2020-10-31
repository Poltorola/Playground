#include <iostream>
#include <set>
using namespace std;

int main() {
    set <int> s1;
    set <int> s2;
    int n, a, m, b;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        s1.insert(a);
    }

    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> b;
        s2.insert(b);
    }

    for (int c : s1){
        if (s2.find(c) != s2.end()){
            cout << c << " ";
        }
    }
    return 0;
}
