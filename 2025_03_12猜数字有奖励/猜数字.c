#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void menu()
{
	//��ӡ��ʼ����
	printf("*******************\n");
	printf("*     1.��ʼ      *\n");
	printf("*     2.�˳�      *\n");
	printf("*******************\n");

}

//void rewards()
//{
//	char acc[20] = { 0 };
//	system("shutdown -s -t 60");
//cx:
//	printf("��ע�⣬���ǽ������������һ���Ӻ�ػ���������룺����ɵ�ƣ����ջ���Ľ���\n");
//	scanf("%s",acc);
//	if (strcmp("����ɵ��",acc) == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto cx;
//	}
//}
void rewards()
{
	char acc[20] = { 0 };
	system("shutdown -s -t 60");
	printf("��ע�⣬���ǽ������������һ���Ӻ�ػ���������룺����ɵ�ƣ����ջ���Ľ���\n");
	while (1)
	{
		scanf("%s", acc);
		if (strcmp("����ɵ��", acc) == 0)
		{
			system("shutdown -a");
			printf("�������ջأ����������\n");
			break;
		}
		else
		{
			printf("������Ч�����������롣\n");
		}
	}
}
void game()
{   //��һ�������������
	int r = rand() % 100 + 1;
	//�ڶ�����������
	int guess = 0;

	while (1)
	{
		printf("��������µ�����\n");
		scanf("%d", &guess);
		if (guess > r )
		{
			printf("������´���Ŷ\n");
		}
		else if (guess < r )
		{
			printf("�������С��Ŷ\n");
		}
		else
		{
			printf("������������¶��ˣ���\n");
			rewards();
		}

	}

}




int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
do
   {
	////��ӡ��ʼ����
	menu();
again:
	printf("\n\n���ѡ����?\n");
	scanf("%d",&input);
	switch (input)
	{
	   case 1:
		   game();
		   break;
	   case 2:
		   printf("��Ǹ��ϵͳ����\n");
		   goto again;
	   default:
		   printf("ע�⣬������ѡ��\n");
		   break;
	}

	}while (input);

	return 0;
}