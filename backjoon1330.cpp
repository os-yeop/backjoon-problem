#include <iostream>

using namespace std;

int main(){
	int a = 0;
	int b = 0;

	cout << "a�� ������ �Է��� �ּ���." << endl;
	cin >> a;
	cout << "b�� ������ �Է��� �ּ���." << endl;
	cin >> b;

	if (a > b) {
		cout << ">" << endl;
		
	}
	else if (a < b) {
		cout << "<" << endl;
	}
	else if (a = b) {
		cout << "==" << endl;
	}
	
}