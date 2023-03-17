//#include <iostream>
//#include <Windows.h>
//#include <string>
//
//using namespace std;
//
///*
//1.网站404攻击
//2.网站篡改攻击
//3.网站攻击记录
//4.DNS攻击
//5.服务器重启攻击
//*/
//
//int main(void) {
//	//char name;
//	string name;
//
//	//int pwd;
//	string pwd;
//
//	cout << "请输入账户: ";
//	cin >> name;//让用户输入账号, 并保存到name中
//
//	cout << "请输入密码: ";
//	cin >> pwd;//让用户输入密码,并保存到pwd中
//	/*
//	cout << "1.网站404攻击" << endl;
//	cout << "2.网站篡改攻击" << endl;
//	cout << "3.网站攻击记录" << endl;
//	cout << "4.DNS攻击" << endl;
//	cout << "5.服务器重启攻击" << endl;
//	cout << "6.退出" << endl;
//	*/
//
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {
	string name("0");
	string pwd("0");

	cout << "请输入账户: ";
	cin >> name;

	cout << "请输入密码: ";
	cin >> pwd;

	if (name == "54hk" && pwd == "123456") {
		cout << "1.网站404攻击" << endl;
		cout << "2.网站篡改攻击" << endl;
		cout << "3.网站攻击记录" << endl;
		cout << "4.DNS攻击" << endl;
		cout << "5.服务器重启攻击" << endl;
		cout << "6.退出" << endl;
	}
	else {
		cout << "账号或密码输入错误, 请重新输入" << endl;
	}

	system("pause");
	return 0;
}