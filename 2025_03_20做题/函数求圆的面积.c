//����Բ�����
//Ҫ�󣺱�д���� float circle_area(float r)��
//���ݰ뾶����Բ���������ȡ3.14159����

#include <stdio.h>
float circle_area(float r)
{
    return 3.14159 * r * r;
}


int main()
{
    float r = 0.0;
    printf("������뾶��");


    if (scanf("%f", &r) != 1)
    {
        printf("���������֣���");
        return 1;
    }

    if (r < 0)
    {
        printf("������Ǹ�������");
        return 1;
    }

    float area = circle_area(r);
    printf("Բ�����Ϊ��%.2f", area);
    return 0;
}