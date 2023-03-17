#include <graphics.h>
#include <conio.h>
#include <Windows.h>

//int main(void) {
//	//初始化图形界面640x480, 就是画布的大小
//	initgraph(640, 480);
//
//	//构建需要的图形 - 画一个圆, 在(320, 240)位置画一个圆, 半径为200
//	circle(320, 240, 200);
//
//	system("pause");
//
//	//关闭图形界面
//	closegraph();
//	return 0;
//}

//int main(void) {
//	initgraph(680, 480);
//
//	setbkcolor(RGB(64, 128, 128));
//	cleardevice();
//
//	//设置画笔的颜色
//	setlinecolor(RGB(255, 0, 0));
//
//	//设置画笔的粗细, PS_SOILD表示实现, 10表示线的宽度
//	setlinestyle(PS_SOLID, 10);
//	circle(320, 240, 200);
//
//	//设置字体的颜色
//	settextcolor(RGB(255, 255, 0));
//	//设置字体 (字体的高度, 字体的宽度(为0表示自适应宽度), 字体名称)
//	settextstyle(100, 0, _T("微软雅黑"));
//	//在坐标(170, 190)的位置打印指定文本
//	outtextxy(170, 190, _T("无码高清"));
//	//RECT r = { 0,0,640,480 };
//	//drawtext(_T("无码高清"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
//
//	//画线, 从坐标位置(180, 380)到坐标(460, 100)画一条线
//	line(180, 380, 460, 100);
//
//	system("pause");
//	closegraph();
//	return 0;
//}

int main(void) {
	initgraph(600, 400);

	//加载图片
	//loadimage(0, _T("bg.jpg"));
	IMAGE img;
	loadimage(&img, _T("bg.jpg"), 0, 0);
	putimage(0, 0, &img);

	//setlinecolor(WHITE);
	//画一个空心矩形, 左上角坐标(300, 40), 右下角坐标(540, 90)
	rectangle(300, 40, 540, 90);
	//设置文本颜色
	settextcolor(RGB(255, 255, 0));
	//设置文本字体风格
	settextstyle(35, 0, _T("微软雅黑"));
	//在矩形内打印文本
	outtextxy(310, 45, _T("1-网站404攻击"));
	rectangle(300, 100, 540, 150);
	//settextcolor(RGB(255, 255, 0));
	//settextstyle(35, 0, _T("微软雅黑"));
	outtextxy(310, 105, _T("2-网站篡改攻击"));
	rectangle(300, 160, 540, 210);
	//settextcolor(RGB(255, 255, 0));
	//settextstyle(35, 0, _T("微软雅黑"));
	outtextxy(310, 165, _T("3-网站修复攻击"));
	rectangle(300, 220, 540, 270);
	//settextstyle(35, 0, _T("微软雅黑"));
	outtextxy(310, 225, _T("4-查看攻击记录"));
	rectangle(300, 280, 540, 330);
	//settextstyle(35, 0, _T("微软雅黑"));
	outtextxy(310, 285, _T("5-DNS攻击"));
	rectangle(300, 340, 540, 390);
	outtextxy(310, 345, _T("6-退出"));


	system("pause");
	closegraph();
	return 0;
}