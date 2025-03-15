#define _CRT_SECURE_NO_WARNINGS
//编写一个程序，读取两个整数，输出它们的和
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", a + b);
//
//	return 0;
//}



//优化代码
//#include <stdio.h>
//
//int main() {
//    int a, b;
//
//    printf("请输入两个整数（用空格分隔）：");
//    if (scanf("%d %d", &a, &b) != 2) {
//        printf("输入无效，请确保输入两个整数！\n");
//        return 1;  // 程序出错了
//                   //使用return 1;表示错误，
//                   //而return 0;表示成功，
//    }
//
//    printf("两个整数的和是：%d\n", a + b);
//    return 0;  // 程序正常结束了
//}