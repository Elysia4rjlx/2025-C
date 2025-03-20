#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 函数声明：判断是否为闰年
// 参数：year（年份）
// 返回值：1（是闰年），0（不是闰年）
int is_leap_year(int year) {
    // 闰年规则：
    // 1. 能被4整除但不能被100整除
    // 2. 或者能被400整除
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int main() {
    int year = 0; // 定义一个变量来存储用户输入的年份

    // 提示用户输入年份
    printf("请输入年份：");

    // 使用 scanf 读取用户输入的年份
    // 检查 scanf 的返回值是否为 1，确保用户输入的是一个有效的整数
    if (scanf("%d", &year) != 1) {
        // 如果输入无效，提示用户并退出程序
        printf("输入无效，请确保输入的是整数！\n");
        return 1; // 返回非零值表示程序异常退出
    }

    // 调用 is_leap_year 函数，判断输入的年份是否为闰年
    int is_leap = is_leap_year(year);

    // 根据函数返回值输出结果
    if (is_leap) {
        // 如果是闰年，输出相应的提示信息
        printf("%d年是闰年！\n", year);
    }
    else {
        // 如果不是闰年，输出相应的提示信息
        printf("%d年不是闰年！\n", year);
    }

    return 0; // 程序正常结束，返回 0
}