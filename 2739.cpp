#include <iostream>

using namespace std;

int main() {
	cout << "������ �Է��Ͻÿ�" << endl;
	int n = 0;
	cin >> n;
	for (int i = 1; i < 10; i++) {
		cout << n << "*" << i << "=" << n * i << endl;
	}
	return 0;
}