#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main(void) {
	string food("");
	int count = 0;

	cout << "��ϲ���Ե���:";

	while (cin >> food) {
		count = count + 1;
		cout << "���" << count << "��ϲ������" << food << endl;
		cout << "��ϲ���Ե���: ";
	}

	cout << "��һ��ϲ����" << count << "�ֶ���" << endl;

	system("pause");
	return 0;
}