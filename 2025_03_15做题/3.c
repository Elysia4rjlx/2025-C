//#define _CRT_SECURE_NO_WARNINGS
////写代码将三个整数数按从大到小输出。
////
////例如：
////
////输入：2 3 1
////
////输出：3 2 1
//
//
//#include <stdio.h>
//int main()
//{
//    int a, b, c;
//    int temp;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a < b)
//    {  //引入中间变量帮助交换        
//        temp = a;  //把a的值赋给temp
//        a = b;    //把b的值赋给a
//        b = temp; //把temp的值赋给b
//    }
//    if (a < c)
//    {
//        temp = a;
//        a = c;
//        c = temp;
//    }
//    if (b < c);
//    {
//        temp = b;
//        b = c;
//        c = temp;
//    }
//    printf("从大到小的顺序是：%d %d %d\n", a, b, c);
//
//    return 0;
//}