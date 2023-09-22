# 1-types-io

## circle.c
```
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
```

## sphere.c
```
#include <stdio.h>
int main()
{
    const double PI = 3.14159;
    int radius = 100;

    double surface_area = 4 * PI * radius * radius;
    //surfaceArea也可
    double volumn = 4.0 / 3 * PI * radius * radius * radius;
    //4/3会向下取整，4.0/3不会
    printf("%-15.4f : surface area\n%-15.4f : volumn\n", surface_area, volumn);
    //15指右对齐，且补足15个字符
    //-指左对齐

    return 0;
}
 ```

## mol.c
```
#include <stdio.h>

int main()
{
    const double MOL = 6.02E23;
    //E为指数
    const int GRAM_PER_MOL = 32;

    int mass = 6;

    double quantity = mass * 1.0 / GRAM_PER_MOL * MOL;

    printf("quantity = %.3e\nquantity = %.5g\n", quantity, quantity);
    //6/32为整型向下取整，*1.0可以调整类型
    //e指科学计数法，g指五位有效数字（不准确，查手册）

    return 0;
}
```

## naive.c
```
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    char first_name[] = "Dayou";
    char lat_name[] = "Luo";
    //数组[]
    //char 字符串
    char gender = 'm';
    //m为字符，不是字符串，用''

    int birth_year = 1954;
    int birth_month = 7;
    int birth_day = 20;

    char weekday[] = "Tuesday";

    int c_score = 30;
    int music_score = 100;
    int medicine_score = 85;

    double mean = (c_score + music_score + medicine_score) / 3.0;
    double sd = sqrt((pow(c_score - mean)))//有问题

    int rank = 5;

    printf("%s \t %s \t %.3c。\n"
           "%.2d-%d-%d\n"
           "%d \t %d \t %d\n"
           "%.1f \t %.2f %d%%\n",
           first_name, last_name, toupper(gender),
           birth_month, birth_day, birth_year,
           c_score, music_score, medicine_score,
           mean, sd, rank);
    //%s 输出字符串
    //%c 输出单个字符(.3s.指缩写为三位)
    //%.2d指精度，最少输出2位
    //toupper()指大写括号中输出内容
    //M还可以用char表示upper_m = gender - ('a' - 'A');

    return 0;
}
```

## admin-scanf.c
```
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    char first_name[];
    char lat_name[];
    //数组[]
    //char 字符串
    char gender;

    int birth_year;
    int birth_month;
    int birth_day;

    char weekday[];

    int c_score;
    int music_score;
    int medicine_score;

    double mean;
    double sd；

    int rank = 5;

    printf("%s \t %s \t %.3c。\n"
           "%.2d-%d-%d\n"
           "%d \t %d \t %d\n"
           "%.1f \t %.2f %d%%\n",
           first_name, last_name, toupper(gender),
           birth_month, birth_day, birth_year,
           c_score, music_score, medicine_score,
           mean, sd, rank);

    scanf("%9s%9s %c %d%d%d %s %d%d%d %lf&lf %d%%",
           first_name, last_name, &gender,
           &birth_year, &birth_month, &birth_day, weekday,
           &c_score, &music_score, &medicine_score，
           &mean, &sd, &rank);
    //%解析输入数据流，并存储到变量中
    //&用来取变量地址
    //数组类型变量本身表示地址，不需&
    //%s与%d不检测空白符; %c检测空白符，在scanf中%c前面添加空白符可以匹配消耗输入的空白符
    //double类型输入时应用%lf
    //%%用于消耗输入时%
    //%s输入时需限定长度

    return 0;
}```