//#include <iostream>
//#include <Windows.h>
//#include <string>
//
//using namespace std;
//
///*
//1.��վ404����
//2.��վ�۸Ĺ���
//3.��վ������¼
//4.DNS����
//5.��������������
//*/
//
//int main(void) {
//	//char name;
//	string name;
//
//	//int pwd;
//	string pwd;
//
//	cout << "�������˻�: ";
//	cin >> name;//���û������˺�, �����浽name��
//
//	cout << "����������: ";
//	cin >> pwd;//���û���������,�����浽pwd��
//	/*
//	cout << "1.��վ404����" << endl;
//	cout << "2.��վ�۸Ĺ���" << endl;
//	cout << "3.��վ������¼" << endl;
//	cout << "4.DNS����" << endl;
//	cout << "5.��������������" << endl;
//	cout << "6.�˳�" << endl;
//	*/
//
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {
	string name("0");
	string pwd("0");

	cout << "�������˻�: ";
	cin >> name;

	cout << "����������: ";
	cin >> pwd;

	if (name == "54hk" && pwd == "123456") {
		cout << "1.��վ404����" << endl;
		cout << "2.��վ�۸Ĺ���" << endl;
		cout << "3.��վ������¼" << endl;
		cout << "4.DNS����" << endl;
		cout << "5.��������������" << endl;
		cout << "6.�˳�" << endl;
	}
	else {
		cout << "�˺Ż������������, ����������" << endl;
	}

	system("pause");
	return 0;
}