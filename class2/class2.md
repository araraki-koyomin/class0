# 2-if-for-array

## min-of-2.c
```
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;

    scanf("%d%d", &a, &b);

    int min = 0;
    //计算ab中最小值
    //养成声明变量时初始化的好习惯

    //代码风格
    //（）中空格留着
    //{}中语句缩进
    //{}位置两种皆可
    //{}中只有一种语句时，{}**可以省略，但千万不要这样做！！！**
    if (a < b){
        min = a;
    }else{
        min = b;
    }

    //三目运算符
    //min = a < b ? a : b;
    //少用，不要嵌套用

    printf("min(%d, %d) = %d\n",a, b, min);
    return 0;
}
```

## min-of-3.c
```
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    scanf("%d%d%d", &a, &b, &c);

    int min = 0;

    if (a > b){
        if (b > c){
            min = c;
        }else{
            min = b;
        }
    }else{//a <= b
        if (a > c){
            min = c;
        }else{
            min = a;
        }
    }

    printf("min{a,b,c} = %d\n", min);
    return 0;
}
```

## leap.c
```
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int year = 0;
    scanf("%d", &year);

    //判断闰年

    bool leap = 0;

    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0){
                leap = 1;
            }else{//year  % 400 != 0;
                leap = 0;
            }
        }else{//year % 100 != 0;
            leap = 1;
        }
    }else{//year % 4 != 0;
        leap = 0;
    }
    //if ()中只要不是0就是1

    if (year == 0){
        printf("no");
    }else{
        printf("yes");
    }

    return 0;
}
```

## leap-else-if.c
```
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int year = 0;
    scanf("%d", &year);

    //判断闰年

    bool leap = 0;

    if (year % 4 != 0)
        leap = 0;
    else if (year % 100 != 0)
        leap = 1;
    else if (year % 400 == 0)
        leap = 1;
    else
        leap = 0;
    //结联式else-if语句

    if (year == 0){
        printf("no");
    }else{
        printf("yes");
    }

    return 0;
}
```

## leap-elseif.c
```
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
    //记得加括号
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
```

## min-array.c
```
#include <stdio.h>

#define NUM 5

int main()
{
    // int[5] (not int[])
    // int[3]
    int numbers[NUM] = {[0] = 1968, [1] = 1961, [2] = 1969, [3] = 1954, [4] = 1969};
    //const int NUM 是 VLA (variable-length array可变长数组)，不建议这样做

    int min = numbers[0];
    //通过下标存储或获取

    //for (*init clause; **condition expression; ***iteration expression) ****loop-body
    //( steps:* turns to **
    //        **==1, turns to ****, turns to ***, turns to checking **
    //        **!=1, exit the loop  )
    for (int i = 1;i < NUM;i++){
        if (min > numbers[i]){
            min = numbers[i];
        }
    }

    printf("min = %d\n", min);
    return 0;
}
```

## min-array-input.c
```
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
```