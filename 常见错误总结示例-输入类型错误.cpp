#include <iostream>
#include <Windows.h>

using namespace std;

int main(void) {
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "������a:" << endl;
	cin >> a;
	if (cin.fail()) {
		cout << "a����ʧ��, Ӧ������һ������" << endl;
		cin.clear();//���cin�Ĵ����־
		cin.sync();//������뻺����
	}

	cout << "������b:" << endl;
	cin >> b;
	if (cin.fail()) {
		cout << "b����ʧ��, Ӧ������һ������" << endl;
		cin.clear();
		cin.sync();
	}

	cout << "������c:" << endl;
	cin >> c;
	if (cin.fail()) {
		cout << "c����ʧ��, Ӧ������һ������" << endl;
		cin.clear();
		cin.sync();
	}

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	system("pause");
	return 0;
}