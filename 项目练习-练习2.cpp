#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {
	string line("0");
	int lineCount = 0;
	int length = 0;

	cout << "����������ַ����ı�: ";
	while (1) {
		if (!getline(cin, line)) {
			break;
		}

		lineCount++;
		length += line.length();
	}
	
	cout << "��һ��������" << lineCount << "���ַ����ı�, �Լ�" << length << "���ַ�" << endl;
	
	system("pause");
	return 0;
}

//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
//
//#define MAX_CHAR_COUNT 1024
//
//int main(void) {
//	char line[MAX_CHAR_COUNT] = { '0' };
//	int lineCount = 0;
//	int length = 0;
//
//	printf("����������ַ���: ");
//	while (1) {
//		if (!gets_s(line, MAX_CHAR_COUNT)) {
//			break;
//		}
//
//		lineCount++;
//		length += strlen(line);
//	}
//
//	printf("��һ��������%d���ַ����ı�, �Լ�%d���ַ�\n", lineCount, length);
//
//	system("pause");
//	return 0;
//}