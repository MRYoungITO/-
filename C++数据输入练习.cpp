#include <iostream>
#include <Windows.h>

using namespace std;

int main(void) {
	char girlType;
	int salary;
	float high;

	cout << "����������������: " << endl;
	cout << "A: �ͻ���" << endl;
	cout << "B: ������" << endl;
	cout << "C: ������" << endl;
	cout << "D: �˶���" << endl;
	cin >> girlType;

	cout << "����������������: ";
	cin >> salary;

	cout << "�������������: [��λ-��] ";
	cin >> high;

	cout << "��������������: " << girlType << endl;
	cout << "������������: " << salary << endl;
	cout << "���������: " << high << endl;

	system("pause");
	return 0;
}