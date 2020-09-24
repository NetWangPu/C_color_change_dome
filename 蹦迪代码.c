#include<stdio.h>
#include<stdlib.h>
#include<windows.h>   //预处理命令
int main()  //主函数
{   //主函数开始
	int c,b;  //定义变量c,b的数据类型为整数型
	printf("\t\t\t\t\t请选择颜色交换速度\n");  //提醒用户输入时间间隔时间
	printf("\t\t\t1.较快\n");
    printf("\t\t\t2.中等\n");
	printf("\t\t\t3.较慢\n");  //提示用户输入选项
	scanf_s("%d",&c);  //使用scanf输入数值
	if (c == 1)  //判断
	{
		 b = 30;
	}
	if (c == 2)  //判断
	{
	     b = 6550;
	}
	if (c == 3)  //判断
	{
		 b = 13330;
	}
	int a;  //定义a的数值类型为整数型
	for (a = 1; a < 10000; a++)//色彩循环
	{
		system("color f5");
		Sleep(b);
		system("color a1");
		Sleep(b);
		system("color b3");
		Sleep(b);
		system("color c5");
		Sleep(b);
		system("color d2");
		Sleep(b);
	}

}
//物联网2006



