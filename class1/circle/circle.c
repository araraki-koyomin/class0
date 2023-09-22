#include <stdio.h>

int main()
{
    const double PI = 3.14159;
    //防止出现magic number

    int radius = 10;
    //声明/定义
    //radius为整型
    //变量被初始化为10(initializes)
    //变量radius被存储在内存(memory)中，其地址为&radius
    //可以为它赋其它值 eg: radius = 5;

    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;
    //2 * 3.1415926 * radius为一个表达式

    printf("radius = %d\ncircumference = %.2f\narea = %.2f\n", radius, circumference, area);
    //格式字符串 ： 普通字符 ， 转换说明符
    //%d指 输出一个整数
    //%f指 输出一个浮点数
    //%.2f指 输出一个小数点后两位浮点数
    //\n指换行

    return 0;
}