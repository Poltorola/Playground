#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(pair <int, string> fir_student, pair <int, string> sec_student){
    return (fir_student.first > sec_student.first);
}

int main() {
    int n, a, b, c;
    string name, surname;
    vector <pair <int, string>> students;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> name >> surname;
        cin >> a >> b >> c;
        students.push_back({a+b+c, name+" "+surname});
    }

    stable_sort(students.begin(), students.end(), comp);

    for (auto student : students){
        cout << student.second << endl;
    }

    return 0;
}
