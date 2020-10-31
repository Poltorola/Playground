#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair <int, int> prev, pair <int, int> curr){
    if (curr.first < prev.first){
        return true;
    } else if (curr.first == prev.first){
        return curr.second > prev.second;
    } else {
        return false;
    }
}

int main() {

    int n, id, rate;
    vector<pair<int,int>> rates;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> id >> rate;
        rates.push_back({rate,id});
    }

    sort(rates.begin(), rates.end(), comp);

    for (auto student : rates){
        cout << student.second << " " << student.first << endl;
    }

    return 0;
}
