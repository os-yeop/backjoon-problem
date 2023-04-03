#include<iostream>

using namespace std;

int main() {
	int n = 0;
	cout << "몇번째 자리의 별 까지 만드시나요?" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}