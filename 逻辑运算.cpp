//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//int main(void) {
//	int money = 0;
//	int days = 0;
//
//	cout << "���ж���Ǯ��?" << endl;
//	cin >> money;
//
//	cout << "����������?" << endl;
//	cin >> days;
//
//	if (money > 100000 && days > 10) {
//		cout << "��Ҫ��ȥ��!" << endl;
//	}
//	else {
//		cout << "�һ����ڼҴ��Ű�!" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

//int main(void) {
//	int money = 0;
//	string result("0");
//
//	cout << "���ж���Ǯ?" << endl;
//	cin >> money;
//
//	cout << "�㰮����?" << endl;
//	cin >> result;
//
//	if (money > 1000000 || result == "��") {
//		cout << "���ǽ���!" << endl;
//	}
//	else {
//		cout << "���Ǹ�����!" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main(void) {
	int money = 0;

	cout << "�����н�Ƕ���?" << endl;
	cin >> money;

	if (!(money >= 30000)) {
		cout << "�����˼Ŷ, ������������ѧϰC++��!!!" << endl;
	}
	else {
		cout << "��ϲ��, ���Ѿ����Խ������!!!" << endl;
	}

	system("pause");
	return 0;
}