#include <iostream>
#include <Windows.h>

using namespace std;

int main(void) {
	int numFood = 0;

	cout << "ʳ���к�����-1, ��������-2, �Ǵ��Ｙ-3, �������-4, ���������-5, ����Լ����ײ�?" << endl;
	cin >> numFood;

	switch (numFood) {
	case 1:
		cout << "��!��ѡ����1�ź������ײ�Ŷ!" << endl;
		break;
	case 2:
		cout << "��!��ѡ����2�ź��������ײ�Ŷ!" << endl;
		break;
	case 3:
		cout << "��!��ѡ����3���Ǵ��Ｙ�ײ�Ŷ!" << endl;
		break;
	case 4:
		cout << "��!��ѡ����4����������ײ�Ŷ!" << endl;
		break;
	case 5:
		cout << "��!��ѡ����5������������ײ�Ŷ!" << endl;
		break;
	default:
		cout << "������˼, ����ֻ����5���ײ�Ŷ!" << endl;
		break;
	}

	system("pause");
	return 0;
}