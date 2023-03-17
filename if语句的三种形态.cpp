
//if...
//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//int main(void) {
//	int salary = 0;
//
//	cout << "你的月薪是多少?" << endl;
//	cin >> salary;
//
//	if (salary < 30000) {
//		cout << "你是一个好人, 我现在还不想谈恋爱." << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//if ... else...
//#include <iostream>
//#include <Windows.h>
//
//using namespace std;
//
//int main(void) {
//	int salary = 0;
//
//	cout << "你的月薪是多少?" << endl;
//	cin >> salary;
//
//	if (salary > 50000) {
//		cout << "我们在一起吧!" << endl;
//	}
//	else {
//		cout << "我没有什么要求, 只要你对我好就行." << endl;
//	}
//
//	system("pause");
//	return 0;
//}


//if...else if.....
//#include <iostream>
//#include <string>
//#include <Windows.h>
//
//using namespace std;
//
//int main(void) {
//	int salary = 0;
//	string houseRet("0");
//	string carRet("0");
//
//	cout << "你月薪多少?" << endl;
//	cin >> salary;
//
//	cout << "你有房吗?" << endl;
//	cin >> houseRet;
//
//	cout << "你有车吗?" << endl;
//	cin >> carRet;
//
//	if (salary > 30000) {
//		cout << "我们在一起吧~" << endl;
//	}
//	else if (houseRet == "有") {
//		cout << "那好吧, 我们一起努力奋斗吧~" << endl;
//	}
//	else if (carRet == "有") {
//		cout << "其实我没什么要求, 只要你对我好就行~" << endl;
//	}
//	else {
//		cout << "你是一个好人, 我现在好不想谈恋爱!!!" << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//if的嵌套
#include <iostream>
#include <Windows.h>

using namespace std;

int main(void) {
	int x = 0;
	int y = 0;
	int z = 0;

	cout << "请输入第一个数: " << endl;
	cin >> x;

	cout << "请输入第二个数:" << endl;
	cin >> y;

	cout << "请输入第二个数:" << endl;
	cin >> z;

	if (x > y) {
		if (x > z) {
			cout << "最大的数是" << x << endl;
		}
		else {
			cout << "最大的数是" << z << endl;
		}
	}
	else if (y > z) {
		cout << "最大的数是" << y << endl;
	}
	else {
		cout << "最大的数是" << z << endl;
	}

	system("pause");
	return 0;
}