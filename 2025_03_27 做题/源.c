//#include <stdio.h>
//int main()
//{
  //  printf("Hello Nowcoder!\n"); // 输出正确的字符串，并在末尾加上换行符
  //  return 0;
//}






/*BC2：小飞机
描述：KiKi学会了printf在屏幕输出信息，他想输出一架小飞机。请帮他编写程序输出这架小飞机。
输入描述：无
输出描述：输出小飞机的图案。*/
/*#include <stdio.h>
int main()
{
	printf("    **    \n");
	printf("    **    \n");
	printf("**********\n");
	printf("**********\n");
	printf("   *  *   \n");
	printf("   *  *   \n");
	return 0;
}*/


/*3. BC3：牛牛学说话之-整数
描述：牛牛刚刚出生，嗷嗷待哺，一开始他只能学说简单的数字，你跟他说一个整数，他立刻就能学会。
输入描述：输入一个整数，范围在32位有符号整数范围内。
输出描述：输出这个整数。

#include <stdio.h>
int main()
{
	int num = 1 ;
	printf("请输入整数: ");
	scanf("%d",&num);
	printf("%d",num);


	return 0;
}*/


/*4. BC4：牛牛学说话之-浮点数
描述：会说整数之后，牛牛开始尝试浮点数（小数）。
输入描述：输入一个浮点数。
输出描述：输出这个浮点数，保留三位小数。

#include <stdio.h>
int main()
{
	float num = 0 ;
	printf("请输入小数；");
	scanf("%f",&num);
	printf("%.3f",num);


	return 0 ;
}*/


/*7. BC7：牛牛的字符矩形
描述：牛牛尝试用键盘读入一个字符，然后在屏幕上显示用这个字符组成的3×3的矩形。
输入描述：一行读入一个char类型的字符。
输出描述：输出这个字符#组成的3×3矩形。*/

#include <stdio.h>
int main()
{
	char ch;
	int a, b;
		scanf("%c", &ch);

	for (a = 1; a <= 3; a++)
	{
		for (b = 1; b <= 3; b++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}

	return 0;
}


/*10. BC10：实现四舍五入
描述：将浮点数转换为整数类型，要求四舍五入。
输入描述：随机输入的浮点数。
输出描述：四舍五入之后的整数。*/

#include <stdio.h>
#include <math.h> // 引入数学库，用于使用round函数

int main()
{
	double num = 0.0;
	// 使用 %lf 格式符读取 double 类型的浮点数
	scanf("%lf", &num);

	// 使用 round 函数进行四舍五入
	int a = (int)round(num);

	// 使用 printf 输出结果
	printf("%d\n", a);

	return 0;
}