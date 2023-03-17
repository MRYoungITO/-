#include <iostream>
#include <Windows.h>

using namespace std;

int main(void) {
	char girlType;
	int salary;
	float high;

	cout << "请输入您的理想型: " << endl;
	cout << "A: 贤惠型" << endl;
	cout << "B: 泼辣性" << endl;
	cout << "C: 文艺型" << endl;
	cout << "D: 运动型" << endl;
	cin >> girlType;

	cout << "请输入您的月收入: ";
	cin >> salary;

	cout << "请输入您的身高: [单位-米] ";
	cin >> high;

	cout << "您的理想类型是: " << girlType << endl;
	cout << "您的月收入是: " << salary << endl;
	cout << "您的身高是: " << high << endl;

	system("pause");
	return 0;
}