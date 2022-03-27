// EasyX入门.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <iostream>
#include<stdio.h>
#include <graphics.h>		// 引用图形库头文件
#include <conio.h>
#include<stdlib.h>
int main()
{
	initgraph(640, 256);	// 创建绘图窗口，大小为 640x480 像素
	setcolor(YELLOW);
	setfillcolor(GREEN);
	for (int y = 0; y < 256; y = y++)
	{
		setcolor(RGB(0, 0, y));
		line(0, y, 640, y);
	}
	fillcircle(200, 120, 100);	// 画圆，圆心(200, 200)，半径 100
	getchar();				// 按任意键继续
	closegraph();			// 关闭绘图窗口
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
