#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {
    int year = 0;
    printf("������һ����ݣ�");
    scanf("%d", &year); // ���û������ȡһ�����

    if (is_leap_year(year)) { // ��������
        printf("%d ������\n", year);
    }
    else {
        printf("%d ��������\n", year);
    }
    return 0;
}