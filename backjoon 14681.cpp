#include <iostream>

using namespace std;

int main() {
	int x = 0; //ù��° ����
	int y = 0; //�ι�° ����

	cout << "ù ��° ������ �Է��ϼ���." << endl;
	cin >> x;
	cout << "�� ��° ������ �Է��ϼ���." << endl;
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
		cout << " 4�и鿡 ������ �ʽ��ϴ�." << endl;
	}

}