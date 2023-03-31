#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {

	cout << "회원가입을 위해서 아이디를 입력해주세요" << endl;
	cout << "아이디입력:";
	string id;
	cin >> id;
	
	id += "??!";
	cout << id;
	return 0;

	}
	