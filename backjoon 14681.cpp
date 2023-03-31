#include <iostream>

using namespace std;

int main() {
	int x = 0; //첫번째 정수
	int y = 0; //두번째 정수

	cout << "첫 번째 정수를 입력하세요." << endl;
	cin >> x;
	cout << "두 번째 정수를 입력하세요." << endl;
	cin >> y;
	
	if (x > 0 and y > 0) {
		cout << "1" << endl;
	}
	else if(x <0 and y >0){
		cout << "2" << endl;
	}
	else if (x < 0 and y < 0) {
		cout << "3" << endl;
	}
	else if (x > 0 and y < 0) {
		cout << "4" << endl;
	}
	else if (x == 0 and y == 0) {
		cout << " 4분면에 속하지 않습니다." << endl;
	}

}