#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double d, d2, d3;
	cin >> d;	// 1.79

	 d2 = d - (int)d;	// 1.79 - 1 = 0.79
       	d3 = d2*10;		// 7.9 

	cout << (int)d3 << endl;			// cast (type change)
	cout << setprecision(0) << fixed;		// set 0 numbers after .
	cout << d3 << "  setprecision(0)" << endl;
	cout << trunc(d3) << "  trunc(x)" << endl;	// cut off the mantissa
	cout << floor(d3) << "  floor(x)" << endl;	// rounding to the bottom
	cout << ceil(d3) << "  ceil(x)" << endl;	// rounding to the top
	cout << round(d3) << "  round(x)" << endl;	// correct rounding

	return 0;
}
