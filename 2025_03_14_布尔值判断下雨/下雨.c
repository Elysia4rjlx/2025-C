//�ô���������д��
//#include <stdio.h>
//#include <stdbool.h>
//
//int main()
//{
//    bool isRaining = true;
//
//    if (isRaining)
//    {
//        printf("Motherfucker, we can't go on a picnic\n");
//    }
//    else
//    {
//        printf("we enjoy sunshine");
//    }
//
//    return 0;
//}




//����д��
//#include <stdio.h>
//#include <stdbool.h>
//int main()
//{
//    bool isRaining;
//re:
//    printf("��������û���꣬1�������꣬0��ʾû��\n");
//    scanf("%d", &isRaining);
//    switch (isRaining)
//    {
//    case 1:
//        printf("�����˲�����\n");
//        break;
//    case 0:
//        printf("û����̫����\n");
//        break;
//    default:
//        printf("�������!�������!�������!���������룡��\n");
//        goto re;
//        break;
//    }
//    return 0;
//}

//ǿ������ֵ��ʹ��
//#include <stdio.h>
//#include <stdbool.h>
//
//int main() 
//{
//    bool isRaining;//����һ������ֵ����ֻ��true��false
//    int input;
//
//    printf("�������Ƿ����꣬1�������꣬0��ʾû�У�\n");
//    scanf("%d", &input);
//
//    isRaining = (input != 0); // ������ת��Ϊboolֵ
//    //(input != 0)���ǱȽϱ��ʽ��ֻ��true��false
//    //��� input ���κη���ֵ������ 1��-1��2 �ȣ���isRaining �ᱻ��ֵΪ true��
//    if (isRaining) 
//    {
//        printf("�����ˣ�������\n");
//    }
//    else 
//    {
//        printf("û���̫꣬���ˣ�\n");
//    }
//    return 0;
//}



#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool isRaining;
    int input;

    // ��ʾ�û����룬����ȡ����ֵ
    printf("��������û���꣬1�������꣬0��ʾû�У�����-1�˳�����\n");
    scanf("%d", &input);

    while (1)
        //while (1) ������ʼ���� 1���� 1 �� C �����б�ʾ �棨true����
        // ��ˣ�while (1) ����˼�ǣ�
        // ֻҪ�������У�ѭ�����ڵĴ���ͻ�һֱִ�У�
        // ֱ������ break �������˳�ѭ������䡣
    {
        if (input == -1)
        {
            printf("�������˳���\n");
            return 0; // �˳�����
        }
        else if (input == 0)
        {
            isRaining = false;
            printf("û���̫꣬���ˣ�\n");
            break; // �˳�ѭ��
        }
        else if (input == 1)
        {
            isRaining = true;
            printf("�����ˣ�������\n");
            break; // �˳�ѭ��
        }
        else
        {
            printf("�������������0��1��\n\n");
            // ������ʾ�û�����
            printf("��������û���꣬\n1�������꣬0��ʾû�У�����-1�˳�����\n");
            scanf("%d", &input);
        }
    }

    // ���� isRaining ��ִֵ�к����߼�
    if (isRaining)
    {
        printf("��Ϊ���꣬������Ҫ��ɡ��\n");
    }
    else
    {
        printf("��Ϊû���꣬���Բ���Ҫ��ɡ��\n");
    }

    return 0;
}