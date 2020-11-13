#include <iostream>
#include <string>
#include <vector>
using namespace std;

void MoveStrings(vector <string> & source, vector <string> & destination){
    for (auto it : source){
        destination.push_back(it);
    }
    source.clear();
}
//
//int main() {
//    vector <string> first = {"snow", "deca"};
//    vector <string> second = {"he", "dron"};
//
//    MoveStrings(second, first);
//
//    for (auto it : first){
//        cout << it;
//    }
//
//    return 0;
//}
