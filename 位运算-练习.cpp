//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//int main(void) {
//	//把一个整数的最低4位设置为0110
//	int x = 0;
//
//	cout << "请输入一个整数: ";
//	cin >> x;
//
//	x = x & ~15;
//	x = x | 6;
//
//	cout << "结果为: " << x << endl;
//
//	system("pause");
//	return 0;
//}

//三目运算符示例
#include <iostream>
#include <Windows.h>

using namespace std;

int main(void) {
	int years = 0;
	int days = 0;

	cout << "请输入您的工作年限: ";
	cin >> years;

	days = (years >= 5 ? 10 : 1);

	cout << "年假时间是 " << days << endl;

	system("pause");
	return 0;
}