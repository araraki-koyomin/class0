#include <stdio.h>
#include <stdbool.h>

int main()
{
    int year = 0;
    scanf("%d", &year);

    //判断闰年

    bool leap = 0;

    //&&: AND
    //||: OR
    //!: NOT
    //逻辑表达式结果：真为1，假为0
    //记得加括号以判断运算顺序
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        leap = 1;
    }
    //短路求值：对于“A && B”，A假，表达式假，B被短路不被运算
    //         对于“A || B”，B真，表达式真，B被短路不被运算

    if (year == 0){
        printf("no");
    }else{
        printf("yes");
    }

    return 0;
}