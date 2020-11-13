// finally got a licence yay!!!

#include <iostream>

using namespace std;

float C = 0;
float K = 0;
float F = 0;


void Kel(float temp){    // перевод в кельвины
    cout << temp << " K:\n";
    if (temp >= 0.0){
        K = temp;
        C = K - 273.15f;
        F = (9.0f / 5.0f) * C + 32;
        cout << C << " C\n"
             << F << " F\n\n";
    } else cout <<"Wrong value of temperature\n\n";
}


void Cel(float temp){    // перевод в цельсии
    cout << temp << " C:\n";
    if (temp >= -273.15){
        C = temp;
        K = C + 273.15f;
        F = (9.0f / 5.0f) * C + 32;
        cout << K << " K\n"
             << F << " F\n\n";
    } else cout << "Wrong value of temperature\n\n";
}


void Far(float temp){    // перевод в фаренгейты
    cout << temp << " F:\n";
    if (temp >= -459.67) {
        F = temp;
        C = (5.0f / 9.0f) * (F - 32);
        K = C + 273.15f;
        cout << C << " C\n"
             << K << " K\n\n";

    } else cout << "Wrong value of temperature\n\n";
}



int main(int argc, char * argv[]) {
    if (argc == 1){
        cout << "1 or 2 arguments were expected, but 0 was received\n";
        return 0;
    }
    if (argc > 3){
        cout << "Too many arguments\n";
        return 0;
    }

    float temp;
    try {
        temp = stof(argv[1]);
    } catch (...){
        cout << "Wrong temperature\n";
        return 0;
    }


    if (argc == 3) {
        if (string(argv[2]) == "K") {
            Kel(temp);

        } else if (string(argv[2]) == "C") {
            Cel(temp);

        } else if (string(argv[2]) == "F") {
            Far(temp);

        } else cout << "Wrong scale\n";

    } else if (argc == 2){
        Kel(temp);
        Cel(temp);
        Far(temp);
    }

    return 0;
}