//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//int main(void) {
//	int money = 0;
//	int days = 0;
//
//	cout << "你有多少钱呢?" << endl;
//	cin >> money;
//
//	cout << "你多少天假期?" << endl;
//	cin >> days;
//
//	if (money > 100000 && days > 10) {
//		cout << "我要出去玩!" << endl;
//	}
//	else {
//		cout << "我还是在家待着吧!" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

//int main(void) {
//	int money = 0;
//	string result("0");
//
//	cout << "你有多少钱?" << endl;
//	cin >> money;
//
//	cout << "你爱我吗?" << endl;
//	cin >> result;
//
//	if (money > 1000000 || result == "爱") {
//		cout << "我们结婚吧!" << endl;
//	}
//	else {
//		cout << "你是个好人!" << endl;
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
	int money = 0;

	cout << "你的月薪是多少?" << endl;
	cin >> money;

	if (!(money >= 30000)) {
		cout << "差点意思哦, 继续开足马力学习C++吧!!!" << endl;
	}
	else {
		cout << "恭喜你, 你已经可以接外包啦!!!" << endl;
	}

	system("pause");
	return 0;
}