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