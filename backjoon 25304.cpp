#include <iostream>
using namespace std;

int main() {
	int x = 0; // 물건의 가격
	int y = 0; //물건의 개수
	int totalprice = 0; // 영수증 총 가격
	int n; //영수증에 적힌 물건의 종류 수 n
	
	cout << "총 가격을 입력해주세요." << endl;

	cin >> totalprice;
	cout << "영수증에 적힌 구매 물건의 종류 수 " << endl;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cout << "물건의 가격과 개수를 각각 적어주세요" << endl;
		cin >> x >> y;
		totalprice -= x * y;
	}
	if (totalprice == 0) {
		cout << "yes";
	}
	else {
		cout << "No";
	}
	return 0;

}