//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//    int arr[3][5] = { 0 };
//    // 声明一个 3 行 5 列的二维数组，并初始化所有元素为0
//    // 输入
//    int i = 0;
//    for (i = 0; i < 3; i++) // 外层循环，控制行
//    {
//        int j = 0;
//        for (j = 0; j < 5; j++) // 内层循环，控制列
//        {
//            scanf("%d", &arr[i][j]);
//            // 从标准输入读取一个整数，并存储到数组的相应位置
//        }
//    }
//
//
//    // 输出
//    for (i = 0; i < 3; i++) // 外层循环，控制行
//    {
//        int j = 0;
//        for (j = 0; j < 5; j++) // 内层循环，控制列
//        {
//            printf("%d ", arr[i][j]);
//            // 输出数组的相应元素，元素之间用空格分隔
//        }
//    }
//    return 0; // 程序正常结束
//}

#include <stdio.h>

int main()
{
    int arr[3][5] = { 0 };
    int i = 0;
    int j = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
        }
    }
    return 0;
}