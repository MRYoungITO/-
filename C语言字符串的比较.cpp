//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
//
//#define MAX_ADDR_VOLUME 128
//
//int main(void) {
//	char addr[MAX_ADDR_VOLUME] = { '0' };
//
//	printf("��Ů, ����������?\n");
//	scanf_s("%s\n", addr, MAX_ADDR_VOLUME);
//
//	if (strcmp(addr, "����") == 0) {
//		printf("��Ů, ����������Ŷ!\n");
//	}
//	else {
//		printf("��Ů, �ҵ����Ѻ���������Ŷ!\n");
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
	int weight = 0;

	cout << "��Ů, ����ذ�?" << endl;
	cin >> weight;

	if (weight > 120) {
		cout << "��Ů, ��˷���, �Ժ���и���Ŷ!" << endl;
	}
	else {
		cout << "��Ů, ��Ĳ���Ŷ!" << endl;
	}

	system("pause");
	return 0;
}