
//if...
//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//int main(void) {
//	int salary = 0;
//
//	cout << "�����н�Ƕ���?" << endl;
//	cin >> salary;
//
//	if (salary < 30000) {
//		cout << "����һ������, �����ڻ�����̸����." << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//if ... else...
//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//int main(void) {
//	int salary = 0;
//
//	cout << "�����н�Ƕ���?" << endl;
//	cin >> salary;
//
//	if (salary > 50000) {
//		cout << "������һ���!" << endl;
//	}
//	else {
//		cout << "��û��ʲôҪ��, ֻҪ����Һþ���." << endl;
//	}
//
//	system("pause");
//	return 0;
//}


//if...else if.....
//#include <iostream>
//#include <string>
//#include <Windows.h>
//
//using namespace std;
//
//int main(void) {
//	int salary = 0;
//	string houseRet("0");
//	string carRet("0");
//
//	cout << "����н����?" << endl;
//	cin >> salary;
//
//	cout << "���з���?" << endl;
//	cin >> houseRet;
//
//	cout << "���г���?" << endl;
//	cin >> carRet;
//
//	if (salary > 30000) {
//		cout << "������һ���~" << endl;
//	}
//	else if (houseRet == "��") {
//		cout << "�Ǻð�, ����һ��Ŭ���ܶ���~" << endl;
//	}
//	else if (carRet == "��") {
//		cout << "��ʵ��ûʲôҪ��, ֻҪ����Һþ���~" << endl;
//	}
//	else {
//		cout << "����һ������, �����ںò���̸����!!!" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//if��Ƕ��
#include <iostream>
#include <Windows.h>

using namespace std;

int main(void) {
	int x = 0;
	int y = 0;
	int z = 0;

	cout << "�������һ����: " << endl;
	cin >> x;

	cout << "������ڶ�����:" << endl;
	cin >> y;

	cout << "������ڶ�����:" << endl;
	cin >> z;

	if (x > y) {
		if (x > z) {
			cout << "��������" << x << endl;
		}
		else {
			cout << "��������" << z << endl;
		}
	}
	else if (y > z) {
		cout << "��������" << y << endl;
	}
	else {
		cout << "��������" << z << endl;
	}

	system("pause");
	return 0;
}