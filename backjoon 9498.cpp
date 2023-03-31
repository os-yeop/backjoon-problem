#include <iostream>

using namespace std;

int main() {
	int number = 0;
	cout << "???? ?????? ??????????." << endl;
	cin >> number;

	if (number <=100 and number >= 90) {
		cout << " A" << endl;

	}
	else if (number <= 89 and number >= 80) {
		cout << "B" << endl;
	}

	else if (number <= 79 and number >= 70) {
		cout << "C" << endl;
	}
	else if (number <=69 and number >= 60) {
		cout << "D" << endl;
	}
	else if(number<60) {
		cout << "F" << endl;
	}
	else {
		cout << "????" << endl;
	}
	return 0;
}
