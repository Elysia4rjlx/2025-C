//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//    int arr[3][5] = { 0 };
//    // ����һ�� 3 �� 5 �еĶ�ά���飬����ʼ������Ԫ��Ϊ0
//    // ����
//    int i = 0;
//    for (i = 0; i < 3; i++) // ���ѭ����������
//    {
//        int j = 0;
//        for (j = 0; j < 5; j++) // �ڲ�ѭ����������
//        {
//            scanf("%d", &arr[i][j]);
//            // �ӱ�׼�����ȡһ�����������洢���������Ӧλ��
//        }
//    }
//
//
//    // ���
//    for (i = 0; i < 3; i++) // ���ѭ����������
//    {
//        int j = 0;
//        for (j = 0; j < 5; j++) // �ڲ�ѭ����������
//        {
//            printf("%d ", arr[i][j]);
//            // ����������ӦԪ�أ�Ԫ��֮���ÿո�ָ�
//        }
//    }
//    return 0; // ������������
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