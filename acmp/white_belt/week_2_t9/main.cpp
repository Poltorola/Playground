#include <iostream>
#include <string>
#include <vector>
using namespace std;


void worry(vector <char> & queue, int position){
    queue[position] = 'w';
}

void quiet(vector <char> & queue, int position){
    queue[position] = 'q';
}

void came(vector <char> & queue, int number){
    queue.resize(queue.size() + number, 'q');
}

void gone(vector <char> & queue, int number){
    queue.resize(queue.size() + number);
}

void worry_count(const vector <char> & queue){
    int ctr = 0;
    for (auto human : queue){
        if (human == 'w') ctr++;
    }
    cout << ctr << endl;
}

//void print_queue(const vector <char> & queue){
//    for (auto human : queue){
//        cout << human << " ";
//    }
//}


int main() {
    vector <char> queue; //= {'q', 'w', 'q'};

    int q, k;
    string command;
    cin >> q;

    for (int i = 0; i < q; i++){
        cin >> command;
        if (command == "WORRY_COUNT") {
            worry_count(queue);
        }
        else {
            cin >> k;
            if (command == "WORRY") worry(queue, k);
            if (command == "QUIET") quiet(queue, k);
            if (command == "COME" && k > 0) came(queue, k);
            if (command == "COME" && k <= 0) gone(queue, k);
        }


    }

    //print_queue(queue);

    return 0;
}
