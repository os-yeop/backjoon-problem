#include <iostream>

using namespace std;

int main() {
	cout << "정수를 입력하시오" << endl;
	int n = 0;
	cin >> n;
	for (int i = 1; i < 10; i++) {
		cout << n << "*" << i << "=" << n * i << endl;
	}
	return 0;
}