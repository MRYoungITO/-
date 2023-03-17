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
//	printf("请输入多个单词: ");
//	while (1) {
//		if (scanf_s("%s", words, MAX_WORDS_COUNT) == -1) {
//			break;
//		}
//
//		count++;
//		length += strlen(words);
//	}
//
//	printf("您一共输入了%d个单词, 单词的总长度是%d\n", count, length);
//
//	system("pause");
//	return 0;
//}

int main(void) {
	string words("");
	int count = 0;
	int length = 0;

	cout << "请输入多个单词: ";
	while (1) {
		
		if (!(cin >> words)) {
			break;
		}

		count++;
		length += words.length();
	}

	cout << "您一共输入了" << count << "个单词, 单词的总长度是" << length << endl;

	system("pause");
	return 0;
}