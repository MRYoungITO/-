//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//int main(void) {
//	//��һ�����������4λ����Ϊ0110
//	int x = 0;
//
//	cout << "������һ������: ";
//	cin >> x;
//
//	x = x & ~15;
//	x = x | 6;
//
//	cout << "���Ϊ: " << x << endl;
//
//	system("pause");
//	return 0;
//}

//��Ŀ�����ʾ��
#include <iostream>
#include <Windows.h>

using namespace std;

int main(void) {
	int years = 0;
	int days = 0;

	cout << "���������Ĺ�������: ";
	cin >> years;

	days = (years >= 5 ? 10 : 1);

	cout << "���ʱ���� " << days << endl;

	system("pause");
	return 0;
}