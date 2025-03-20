//计算圆的面积
//要求：编写函数 float circle_area(float r)，
//根据半径计算圆的面积（π取3.14159）。

#include <stdio.h>
float circle_area(float r)
{
    return 3.14159 * r * r;
}


int main()
{
    float r = 0.0;
    printf("请输入半径：");


    if (scanf("%f", &r) != 1)
    {
        printf("请输入数字！！");
        return 1;
    }

    if (r < 0)
    {
        printf("请输入非负数！！");
        return 1;
    }

    float area = circle_area(r);
    printf("圆的面积为：%.2f", area);
    return 0;
}