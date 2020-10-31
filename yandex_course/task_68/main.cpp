#include <iostream>
#include <map>

using namespace std;


int main() {
    multimap <int, pair <int, int>> points;
    int n, x, y, dist;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> x >> y;
        dist = x*x + y*y;
        points.insert({dist, {x, y}});
    }

    for (auto point : points){
        cout << point.second.first << " " << point.second.second << endl;
    }

    return 0;
}
