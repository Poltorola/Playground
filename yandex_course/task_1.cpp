#include <iostream>

using namespace std;

int main() {

	int prev, cur, next, min = 0, f = 0, dis = 0;

	cin >> prev;
	cur = prev;
	next = prev;

	while (next != 0) {

		if (cur > prev && cur > next) {	  // met local max

			f++;			// increased number of local max's

			if (2 == f) {		 // second local max => we get first min
				min = dis;
			}


			if (min > dis) {	// any local max, if last min was bigger than get new dis
				min = dis;
			}

			dis = 0;
		}

		dis++;

	prev = cur;
	cur = next;
	cin >> next;
	}


	cout << min << endl;
	return 0;
}
