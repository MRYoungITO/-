#include <iostream>
#include <Windows.h>

using namespace std;

int main(void) {
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "请输入a:" << endl;
	cin >> a;
	if (cin.fail()) {
		cout << "a输入失败, 应该输入一个整数" << endl;
		cin.clear();//清除cin的错误标志
		cin.sync();//清空输入缓冲区
	}

	cout << "请输入b:" << endl;
	cin >> b;
	if (cin.fail()) {
		cout << "b输入失败, 应该输入一个整数" << endl;
		cin.clear();
		cin.sync();
	}

	cout << "请输入c:" << endl;
	cin >> c;
	if (cin.fail()) {
		cout << "c输入失败, 应该输入一个整数" << endl;
		cin.clear();
		cin.sync();
	}

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	system("pause");
	return 0;
}