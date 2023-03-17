
//习题一
// 
//#include <iostream>
//#include <string>
//#include <Windows.h>
//
//using namespace std;
//
//int main(void) {
//	char character = '0';
//
//	cout << "请输入一个大写或小写的字母: ";
//	cin >> character;
//
//	if (character >= 65 && character <= 90) {
//		cout << "您输入的字符转换为: " << (char)(character + 32) << endl;
//	}
//	else if (character >= 97 && character <= 122) {
//		cout << "您输入的字符转换为: " << (char)(character - 32) << endl;
//	}
//	else {
//		cout << "您没有输入大写或小写的字母, 无法转换, 输入的结果为: " << character << endl;
//	}
//
//	system("pause");
//	return 0;
//}


//习题二
//#include <iostream>
//#include <string>
//#include <Windows.h>
//
//using namespace std;
//
//int main(void) {
//	int num;
//	
//	cout << "请输入一个数字(0-9): ";
//	cin >> num;
//
//	string arry[10] = { "零","壹","贰","叁","肆","伍","陆","柒","捌","玖" };
//
//	if (num >= 0 && num <= 9) {
//		cout << arry[num] << endl;
//	}
//	
//	//方法一
//	//switch (num) {
//	//case 0:
//	//	cout << "零" << endl;
//	//	break;
//	//case 1:
//	//	cout << "壹" << endl;
//	//	break;
//	//case 2:
//	//	cout << "贰" << endl;
//	//	break;
//	//case 3:
//	//	cout << "叁" << endl;
//	//	break;
//	//case 4:
//	//	cout << "肆" << endl;
//	//	break;
//	//case 5:
//	//	cout << "伍" << endl;
//	//	break;
//	//case 6:
//	//	cout << "陆" << endl;
//	//	break;
//	//case 7:
//	//	cout << "柒" << endl;
//	//	break;
//	//case 8:
//	//	cout << "捌" << endl;
//	//	break;
//	//case 9:
//	//	cout << "玖" << endl;
//	//	break;
//	//default:
//	//	break;
//	//}
//
//	system("pause");
//	return 0;
//}


//习题三
#include <iostream>
#include <Windows.h>

using namespace std;

/*
	让用户输入年份和月份, 然后输出这个月有多少天
	润年的2月份有29天
	普通润年: 能被4整除单不能被100整除的年份
	世纪闰年: 能被400整除
*/

int main(void) {
	int years = 0;
	int num = 0;
	int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	
	cout << "请输入年份: ";
	cin >> years;

	cout << "请输入月份: ";
	cin >> num;

	if (((years % 4 != 0) && (years % 100 != 0)) && (years % 400 != 0)) {
		if (num == 2) {
			cout << years << "年" << num << "月有" << months[num - 1] + 1 << "天" << endl;
		}
		else if ((num == 1) || ((num >= 3) && (num <= 12))) {
			cout << years << "年" << num << "月有" << months[num - 1] << "天" << endl;
		}
		else {
			cout << "你输入的月份有误, 请重新输入哦!" << endl;
		}
	}
	else if (((years % 4 == 0) && (years % 100 != 0)) && (years && 400 != 0)) {
		if (num == 2) {
			cout << years << "年" << num << "月有" << months[num - 1] + 1 << "天. 哇! 这一年是个润年哦!" << endl;
		}
		else if ((num == 1) || ((num >= 3) && (num <= 12))) {
			cout << years << "年" << num << "月有" << months[num - 1] << "天. 哇! 这一年是个润年哦!" << endl;
		}
		else {
			cout << "你输入的月份有误, 请重新输入哦!" << endl;
		}
	}
	else if (((years % 4 == 0) && (years % 100 == 0)) && (years % 400 == 0)) {
		if (num == 2) {
			cout << years << "年" << num << "月有" << months[num - 1] + 1 << "天. 哇! 这一年是个超级润年哦!" << endl;
		}
		else if ((num == 1) || ((num >= 3) && (num <= 12))) {
			cout << years << "年" << num << "月有" << months[num - 1] << "天. 哇! 这一年是个超级润年哦!" << endl;
		}
		else {
			cout << "你输入的月份有误, 请重新输入哦!" << endl;
		}
	}

	system("pause");
	return 0;
}