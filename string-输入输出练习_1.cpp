#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main(void) {
	string food("");
	int count = 0;

	cout << "你喜欢吃的是:";

	while (cin >> food) {
		count = count + 1;
		cout << "你第" << count << "次喜欢的是" << food << endl;
		cout << "你喜欢吃的是: ";
	}

	cout << "你一共喜欢吃" << count << "种东西" << endl;

	system("pause");
	return 0;
}