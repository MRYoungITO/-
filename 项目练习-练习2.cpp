#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {
	string line("0");
	int lineCount = 0;
	int length = 0;

	cout << "请输入多行字符串文本: ";
	while (1) {
		if (!getline(cin, line)) {
			break;
		}

		lineCount++;
		length += line.length();
	}
	
	cout << "您一共输入了" << lineCount << "行字符串文本, 以及" << length << "个字符" << endl;
	
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
//	printf("请输入多行字符串: ");
//	while (1) {
//		if (!gets_s(line, MAX_CHAR_COUNT)) {
//			break;
//		}
//
//		lineCount++;
//		length += strlen(line);
//	}
//
//	printf("您一共输入了%d行字符串文本, 以及%d个字符\n", lineCount, length);
//
//	system("pause");
//	return 0;
//}