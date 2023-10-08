#include <stdio.h>

#define NUM 5

int main()
{
    int numbers[NUM] = {0};
    //初始化操作
    //{0}：全部初始化为0
    //{1}：int[0]初始化为1,其余初始化为0

    for (int i = 0; i < NUM; i++){
        scanf("%d", &numbers[i]);
    }
    //变量作用域：若变量在循环内声明，则只能限定在该循环中，其后不可访问（从C99开始）
    //           若在循环外，则作用于整体

    int min = numbers[0];

    for (int i = 1; i < 5; i++)
    {
        if (min > numbers[i])
        {
            min = numbers[i];
        }
    }

    printf("min = %d\n", min);
    return 0;
}