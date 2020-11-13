#include <iostream>
#include <vector>
using namespace std;

vector <int> Reversed(const vector <int> & v){
    vector <int> result;
    for (int i = v.size() - 1; i >= 0; i--){
        result.push_back(v[i]);
    }
    return result;
}
//
//int main() {
//    const vector <int> v = {1,2,3,4,5};
//    vector <int> r(v.size());
//    r = Reversed(v);
//
//    for (int it : r){
//        cout << it;
//    }
//
//    return 0;
//}
