
//ϰ��һ
// 
//#include <iostream>
//#include <string>
//#include <Windows.h>
//
//using namespace std;
//
//int main(void) {
//	char character = '0';
//
//	cout << "������һ����д��Сд����ĸ: ";
//	cin >> character;
//
//	if (character >= 65 && character <= 90) {
//		cout << "��������ַ�ת��Ϊ: " << (char)(character + 32) << endl;
//	}
//	else if (character >= 97 && character <= 122) {
//		cout << "��������ַ�ת��Ϊ: " << (char)(character - 32) << endl;
//	}
//	else {
//		cout << "��û�������д��Сд����ĸ, �޷�ת��, ����Ľ��Ϊ: " << character << endl;
//	}
//
//	system("pause");
//	return 0;
//}


//ϰ���
//#include <iostream>
//#include <string>
//#include <Windows.h>
//
//using namespace std;
//
//int main(void) {
//	int num;
//	
//	cout << "������һ������(0-9): ";
//	cin >> num;
//
//	string arry[10] = { "��","Ҽ","��","��","��","��","½","��","��","��" };
//
//	if (num >= 0 && num <= 9) {
//		cout << arry[num] << endl;
//	}
//	
//	//����һ
//	//switch (num) {
//	//case 0:
//	//	cout << "��" << endl;
//	//	break;
//	//case 1:
//	//	cout << "Ҽ" << endl;
//	//	break;
//	//case 2:
//	//	cout << "��" << endl;
//	//	break;
//	//case 3:
//	//	cout << "��" << endl;
//	//	break;
//	//case 4:
//	//	cout << "��" << endl;
//	//	break;
//	//case 5:
//	//	cout << "��" << endl;
//	//	break;
//	//case 6:
//	//	cout << "½" << endl;
//	//	break;
//	//case 7:
//	//	cout << "��" << endl;
//	//	break;
//	//case 8:
//	//	cout << "��" << endl;
//	//	break;
//	//case 9:
//	//	cout << "��" << endl;
//	//	break;
//	//default:
//	//	break;
//	//}
//
//	system("pause");
//	return 0;
//}


//ϰ����
#include <iostream>
#include <Windows.h>

using namespace std;

/*
	���û�������ݺ��·�, Ȼ�����������ж�����
	�����2�·���29��
	��ͨ����: �ܱ�4���������ܱ�100���������
	��������: �ܱ�400����
*/

int main(void) {
	int years = 0;
	int num = 0;
	int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	
	cout << "���������: ";
	cin >> years;

	cout << "�������·�: ";
	cin >> num;

	if (((years % 4 != 0) && (years % 100 != 0)) && (years % 400 != 0)) {
		if (num == 2) {
			cout << years << "��" << num << "����" << months[num - 1] + 1 << "��" << endl;
		}
		else if ((num == 1) || ((num >= 3) && (num <= 12))) {
			cout << years << "��" << num << "����" << months[num - 1] << "��" << endl;
		}
		else {
			cout << "��������·�����, ����������Ŷ!" << endl;
		}
	}
	else if (((years % 4 == 0) && (years % 100 != 0)) && (years && 400 != 0)) {
		if (num == 2) {
			cout << years << "��" << num << "����" << months[num - 1] + 1 << "��. ��! ��һ���Ǹ�����Ŷ!" << endl;
		}
		else if ((num == 1) || ((num >= 3) && (num <= 12))) {
			cout << years << "��" << num << "����" << months[num - 1] << "��. ��! ��һ���Ǹ�����Ŷ!" << endl;
		}
		else {
			cout << "��������·�����, ����������Ŷ!" << endl;
		}
	}
	else if (((years % 4 == 0) && (years % 100 == 0)) && (years % 400 == 0)) {
		if (num == 2) {
			cout << years << "��" << num << "����" << months[num - 1] + 1 << "��. ��! ��һ���Ǹ���������Ŷ!" << endl;
		}
		else if ((num == 1) || ((num >= 3) && (num <= 12))) {
			cout << years << "��" << num << "����" << months[num - 1] << "��. ��! ��һ���Ǹ���������Ŷ!" << endl;
		}
		else {
			cout << "��������·�����, ����������Ŷ!" << endl;
		}
	}

	system("pause");
	return 0;
}