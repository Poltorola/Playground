#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector <int> v;
    cin >> n;

    while (n != 1){
        v.push_back(n % 2);
        n = n / 2;
    }
    v.push_back(1);

    for (int j = v.size()-1; j >= 0; j--){
        cout << v[j];
    }



//    bool flag = false;
//    int mask = 0x80000000; // 100000000000000..00
//    for(int i = 0; i < 32; i++){
//        if((mask & n) == mask){
//            flag = true;
//            cout << '1';
//        } else if(flag){
//            cout << '0';
//        }
//        n <<= 1;
//    }


    return 0;
}
