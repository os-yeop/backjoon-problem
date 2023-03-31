#include <iostream>

using namespace std;

int main(){
	int a = 0;
	int b = 0;

	cout << "a의 정수를 입력해 주세요." << endl;
	cin >> a;
	cout << "b의 정수를 입력해 주세요." << endl;
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