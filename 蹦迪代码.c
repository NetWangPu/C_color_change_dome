#include<stdio.h>
#include<stdlib.h>
#include<windows.h>   //Ԥ��������
int main()  //������
{   //��������ʼ
	int c,b;  //�������c,b����������Ϊ������
	printf("\t\t\t\t\t��ѡ����ɫ�����ٶ�\n");  //�����û�����ʱ����ʱ��
	printf("\t\t\t1.�Ͽ�\n");
    printf("\t\t\t2.�е�\n");
	printf("\t\t\t3.����\n");  //��ʾ�û�����ѡ��
	scanf_s("%d",&c);  //ʹ��scanf������ֵ
	if (c == 1)  //�ж�
	{
		 b = 30;
	}
	if (c == 2)  //�ж�
	{
	     b = 6550;
	}
	if (c == 3)  //�ж�
	{
		 b = 13330;
	}
	int a;  //����a����ֵ����Ϊ������
	for (a = 1; a < 10000; a++)//ɫ��ѭ��
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
//������2006



