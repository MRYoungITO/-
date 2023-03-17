//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
//
//#define MAX_ADDR_VOLUME 128
//
//int main(void) {
//	char addr[MAX_ADDR_VOLUME] = { '0' };
//
//	printf("美女, 你是哪里人?\n");
//	scanf_s("%s\n", addr, MAX_ADDR_VOLUME);
//
//	if (strcmp(addr, "湖南") == 0) {
//		printf("美女, 我们是老乡哦!\n");
//	}
//	else {
//		printf("美女, 我的朋友和你是老乡哦!\n");
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

	cout << "美女, 你多重啊?" << endl;
	cin >> weight;

	if (weight > 120) {
		cout << "美女, 如此丰满, 以后很有福气哦!" << endl;
	}
	else {
		cout << "美女, 身材不错哦!" << endl;
	}

	system("pause");
	return 0;
}