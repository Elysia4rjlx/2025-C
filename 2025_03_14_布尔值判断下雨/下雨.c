//该代码是最先写的
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




//重新写的
//#include <stdio.h>
//#include <stdbool.h>
//int main()
//{
//    bool isRaining;
//re:
//    printf("请输入有没有雨，1代表有雨，0表示没有\n");
//    scanf("%d", &isRaining);
//    switch (isRaining)
//    {
//    case 1:
//        printf("下雨了草拟吗\n");
//        break;
//    case 0:
//        printf("没有雨太好了\n");
//        break;
//    default:
//        printf("输入错误!输入错误!输入错误!请重新输入！！\n");
//        goto re;
//        break;
//    }
//    return 0;
//}

//强调布尔值的使用
//#include <stdio.h>
//#include <stdbool.h>
//
//int main() 
//{
//    bool isRaining;//定义一个布尔值，它只有true与false
//    int input;
//
//    printf("请输入是否有雨，1代表有雨，0表示没有：\n");
//    scanf("%d", &input);
//
//    isRaining = (input != 0); // 将输入转换为bool值
//    //(input != 0)这是比较表达式，只有true与false
//    //如果 input 是任何非零值（比如 1、-1、2 等），isRaining 会被赋值为 true。
//    if (isRaining) 
//    {
//        printf("下雨了，草拟吗！\n");
//    }
//    else 
//    {
//        printf("没有雨，太好了！\n");
//    }
//    return 0;
//}



#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool isRaining;
    int input;

    // 提示用户输入，并获取输入值
    printf("请输入有没有雨，1代表有雨，0表示没有（输入-1退出）：\n");
    scanf("%d", &input);

    while (1)
        //while (1) 的条件始终是 1，而 1 在 C 语言中表示 真（true）。
        // 因此，while (1) 的意思是：
        // 只要程序运行，循环体内的代码就会一直执行，
        // 直到遇到 break 或其他退出循环的语句。
    {
        if (input == -1)
        {
            printf("程序已退出。\n");
            return 0; // 退出程序
        }
        else if (input == 0)
        {
            isRaining = false;
            printf("没有雨，太好了！\n");
            break; // 退出循环
        }
        else if (input == 1)
        {
            isRaining = true;
            printf("下雨了，草拟吗！\n");
            break; // 退出循环
        }
        else
        {
            printf("输入错误！请输入0或1。\n\n");
            // 重新提示用户输入
            printf("请输入有没有雨，\n1代表有雨，0表示没有（输入-1退出）：\n");
            scanf("%d", &input);
        }
    }

    // 根据 isRaining 的值执行后续逻辑
    if (isRaining)
    {
        printf("因为下雨，所以需要带伞。\n");
    }
    else
    {
        printf("因为没有雨，所以不需要带伞。\n");
    }

    return 0;
}