#include <iostream>
#include <Windows.h>

using namespace std;

int main(void) {
	float r = 0;
	float len = 0;
	float s = 0;


	cout << "������Բ�İ뾶: ";
	cin >> r;

	len = 3.14 * 2 * r;
	s = 3.14 * r * r;

	cout.precision(2);
	cout.flags(cout.fixed);

	cout << "Բ���ܳ�: " << len << endl;
	cout << "Բ�����: " << s << endl;

	system("pause");
	return 0;
}