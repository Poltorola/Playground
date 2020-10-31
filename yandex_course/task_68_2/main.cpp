#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair <int, int> prevpoint, pair <int, int> currpoint){
    int pdist =  prevpoint.first*prevpoint.first + prevpoint.second*prevpoint.second;
    int cdist = currpoint.second*currpoint.second + currpoint.first*currpoint.first;
    return (cdist > pdist);
}

int main() {
    int n;
    pair <int, int> p;
    vector <pair <int, int>> coordinates;
    cin >> n;

    for (int i = 0; i < n; i ++){
        cin >> p.first >> p.second;
        coordinates.push_back(p);
    }

    sort(coordinates.begin(), coordinates.end(), comp);

    for (auto point : coordinates){
        cout << point.first << " " << point.second << endl;
    }

    return 0;
}
