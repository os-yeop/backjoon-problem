#include <iostream>
using namespace std;

int main() {
	int x = 0; // ������ ����
	int y = 0; //������ ����
	int totalprice = 0; // ������ �� ����
	int n; //�������� ���� ������ ���� �� n
	
	cout << "�� ������ �Է����ּ���." << endl;

	cin >> totalprice;
	cout << "�������� ���� ���� ������ ���� �� " << endl;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cout << "������ ���ݰ� ������ ���� �����ּ���" << endl;
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