#include <iostream>
#include <Windows.h>
#include <string>
//#include <stdio.h>
//#include <string.h>

//#define MAX_WORDS_COUNT 128

using namespace std;

//int main(void) {
//	char words[MAX_WORDS_COUNT] = { "0" };
//	int count = 0;
//	int length = 0;
//		
//	printf("������������: ");
//	while (1) {
//		if (scanf_s("%s", words, MAX_WORDS_COUNT) == -1) {
//			break;
//		}
//
//		count++;
//		length += strlen(words);
//	}
//
//	printf("��һ��������%d������, ���ʵ��ܳ�����%d\n", count, length);
//
//	system("pause");
//	return 0;
//}

int main(void) {
	string words("");
	int count = 0;
	int length = 0;

	cout << "������������: ";
	while (1) {
		
		if (!(cin >> words)) {
			break;
		}

		count++;
		length += words.length();
	}

	cout << "��һ��������" << count << "������, ���ʵ��ܳ�����" << length << endl;

	system("pause");
	return 0;
}