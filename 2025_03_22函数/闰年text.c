#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {
    int year = 0;
    printf("请输入一个年份：");
    scanf("%d", &year); // 从用户那里获取一个年份

    if (is_leap_year(year)) { // 函数调用
        printf("%d 是闰年\n", year);
    }
    else {
        printf("%d 不是闰年\n", year);
    }
    return 0;
}