#define _CRT_SECURE_NO_WARNINGS
//练习2:二分查找
//在一个升序的数组中查找指定的数字n, 很容易想到的方法就是遍历数组, 但是这种方法效率比较低。
//比如我买, 一双鞋, 你好奇问我多少钱, 我说不超过300元。
//你还是好奇, 你想知道到底多少, 我就让你猜, 你会怎么猜 ? 你会1, 2, 3, 4...这样猜吗 ? 显然很慢; 
//一般你都会猜中间数字, 比如:150, 然后看大了还是小了, 这就是二分查找, 也叫折半查找。
//折半查找也叫二分查找，查找的前提条件是数据是有序的
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // 升序数组
    int k = 0;

    printf("请输入要查找的数字：");
    scanf("%d", &k);


    int left = 0; // 左边界
    int right = sizeof(arr) / sizeof(arr[0]) - 1; // 右边界
    int mid;
    int flag = 0;//假设找不到

    while (left <= right) // 当左边界小于等于右边界时继续查找
    {
        mid = left + (right - left) / 2; // 安全计算中间位置

        if (arr[mid] < k) // 如果中间值小于目标值
        {
            left = mid + 1; // 调整左边界
        }
        else if (arr[mid] > k) // 如果中间值大于目标值
        {
            right = mid - 1; // 调整右边界
        }
        else // 如果中间值等于目标值
        {
            printf("找到下标了，它是%d\n", mid);
            flag = 1;
            break;
        }
    }

    if (!flag)
    {
        printf("找不到\n"); // 如果左边界大于右边界，说明未找到目标值
    }
    return 0;
}