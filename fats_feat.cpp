#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;


double math_pow(double num, int powNum) {
	if (powNum < 0) {
		cout << "Only positive degree" << endl;
		return 0;
	}
	else {
		double numInPow = pow(num, powNum);
		return numInPow;
	}
}

int main() {
	cout << "2.5^5 = " << math_pow(2.5, 5) << endl;
	system("pause");
	return 0;
}