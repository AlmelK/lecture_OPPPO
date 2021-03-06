#include <cstdlib>
#include <iostream>

using namespace std;

double my_pow(double num, int powNum) {
	if (powNum < 0) {
		cout << "Error!" << endl;
		return 0;
	}

	else {
		double result = 1;
		for (int i = 0; i < powNum; i++) {
			result *= num;
		}
		return result;
	}
}

int main() {
	
	double number = my_pow(2, 8);
	if (number == 0) {
		cout << "Error, only positive degree!" << endl;
		system("pause");
		return 0;
	}
	else {
		cout << "2^8 = " << my_pow(2, 8) << endl;
		system("pause");
		return 0;
	}
}