#include <graphics.h>
#include <conio.h>
#include <Windows.h>

//int main(void) {
//	//��ʼ��ͼ�ν���640x480, ���ǻ����Ĵ�С
//	initgraph(640, 480);
//
//	//������Ҫ��ͼ�� - ��һ��Բ, ��(320, 240)λ�û�һ��Բ, �뾶Ϊ200
//	circle(320, 240, 200);
//
//	system("pause");
//
//	//�ر�ͼ�ν���
//	closegraph();
//	return 0;
//}

//int main(void) {
//	initgraph(680, 480);
//
//	setbkcolor(RGB(64, 128, 128));
//	cleardevice();
//
//	//���û��ʵ���ɫ
//	setlinecolor(RGB(255, 0, 0));
//
//	//���û��ʵĴ�ϸ, PS_SOILD��ʾʵ��, 10��ʾ�ߵĿ��
//	setlinestyle(PS_SOLID, 10);
//	circle(320, 240, 200);
//
//	//�����������ɫ
//	settextcolor(RGB(255, 255, 0));
//	//�������� (����ĸ߶�, ����Ŀ��(Ϊ0��ʾ����Ӧ���), ��������)
//	settextstyle(100, 0, _T("΢���ź�"));
//	//������(170, 190)��λ�ô�ӡָ���ı�
//	outtextxy(170, 190, _T("�������"));
//	//RECT r = { 0,0,640,480 };
//	//drawtext(_T("�������"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
//
//	//����, ������λ��(180, 380)������(460, 100)��һ����
//	line(180, 380, 460, 100);
//
//	system("pause");
//	closegraph();
//	return 0;
//}

int main(void) {
	initgraph(600, 400);

	//����ͼƬ
	//loadimage(0, _T("bg.jpg"));
	IMAGE img;
	loadimage(&img, _T("bg.jpg"), 0, 0);
	putimage(0, 0, &img);

	//setlinecolor(WHITE);
	//��һ�����ľ���, ���Ͻ�����(300, 40), ���½�����(540, 90)
	rectangle(300, 40, 540, 90);
	//�����ı���ɫ
	settextcolor(RGB(255, 255, 0));
	//�����ı�������
	settextstyle(35, 0, _T("΢���ź�"));
	//�ھ����ڴ�ӡ�ı�
	outtextxy(310, 45, _T("1-��վ404����"));
	rectangle(300, 100, 540, 150);
	//settextcolor(RGB(255, 255, 0));
	//settextstyle(35, 0, _T("΢���ź�"));
	outtextxy(310, 105, _T("2-��վ�۸Ĺ���"));
	rectangle(300, 160, 540, 210);
	//settextcolor(RGB(255, 255, 0));
	//settextstyle(35, 0, _T("΢���ź�"));
	outtextxy(310, 165, _T("3-��վ�޸�����"));
	rectangle(300, 220, 540, 270);
	//settextstyle(35, 0, _T("΢���ź�"));
	outtextxy(310, 225, _T("4-�鿴������¼"));
	rectangle(300, 280, 540, 330);
	//settextstyle(35, 0, _T("΢���ź�"));
	outtextxy(310, 285, _T("5-DNS����"));
	rectangle(300, 340, 540, 390);
	outtextxy(310, 345, _T("6-�˳�"));


	system("pause");
	closegraph();
	return 0;
}