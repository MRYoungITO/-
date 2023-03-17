#include <iostream>
#include <Windows.h>

using namespace std;

int main(void) {
	int numFood = 0;

	cout << "Ê³ÌÃÓÐºìÉÕÈâ-1, ºìÉÕÇÑ×Ó-2, ÌÇ´×Àï¼¹-3, òºÓÍÉú²Ë-4, ËâÈØÓÍÂó²Ë-5, ÄãÏë³Ô¼¸ºÅÌ×²Í?" << endl;
	cin >> numFood;

	switch (numFood) {
	case 1:
		cout << "°¡!ÄãÑ¡ÔñÊÇ1ºÅºìÉÕÈâÌ×²ÍÅ¶!" << endl;
		break;
	case 2:
		cout << "°¡!ÄãÑ¡ÔñÊÇ2ºÅºìÉÕÇÑ×ÓÌ×²ÍÅ¶!" << endl;
		break;
	case 3:
		cout << "°¡!ÄãÑ¡ÔñÊÇ3ºÅÌÇ´×Àï¼¹Ì×²ÍÅ¶!" << endl;
		break;
	case 4:
		cout << "°¡!ÄãÑ¡ÔñÊÇ4ºÅòºÓÍÉú²ËÌ×²ÍÅ¶!" << endl;
		break;
	case 5:
		cout << "°¡!ÄãÑ¡ÔñÊÇ5ºÅËâÈØÓÍÂó²ËÌ×²ÍÅ¶!" << endl;
		break;
	default:
		cout << "²»ºÃÒâË¼, ÏÖÔÚÖ»ÓÐÕâ5ÖÖÌ×²ÍÅ¶!" << endl;
		break;
	}

	system("pause");
	return 0;
}