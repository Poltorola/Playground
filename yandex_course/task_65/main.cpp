#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;

int main() {
    map <string, set<string>> eng_lat;
    map <string, string> lat_eng;
    int n;
    string eng, lat, tire;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> eng;
        set <string> lat_set;
        eng_lat[eng] = lat_set;
        cin >> tire;
        cin >> lat;
        while (lat[lat.size() - 1] == ','){     // считываем латинские слова
            lat.pop_back();                     // отрезаем запятую
            eng_lat[eng].insert(lat);
            cin >> lat;
        }
        eng_lat[eng].insert(lat);
    }
    // pair<string, set<string>>
    for (auto eng_and_lat_set : eng_lat){
        eng = eng_and_lat_set.first;
        set<string> lat_set = eng_and_lat_set.second;
        for(auto lat : lat_set){
            lat_eng[lat] = eng;
        }
    }

    cout << lat_eng.size() << endl;
    for (auto pair : lat_eng){
        cout << pair.first << " - " << pair.second << endl;
    }

    return 0;
}
