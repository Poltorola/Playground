#include <iostream>
#include <vector>
using namespace std;

void Reverse(vector <int> & v){
    for (int i = 0; i < v.size()/2; i++){
        swap(v[i], v[v.size() - 1 - i]);
    }
}
//
//int main() {
//    vector <int> v = {1,2,3,4,5};
//
//    Reverse(v);
//
//    for (int i : v){
//        cout << i;
//    }
//
//    return 0;
//}
