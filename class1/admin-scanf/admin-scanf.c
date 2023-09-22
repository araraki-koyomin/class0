#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    char first_name;
    char last_name;
    //数组[]
    //char 字符串
    char gender;

    int birth_year;
    int birth_month;
    int birth_day;

    char weekday;

    int c_score;
    int music_score;
    int medicine_score;

    double mean;
    double sd;

    int rank = 5;

    scanf("%9s%9s %c %d%d%d %s %d%d%d %lf%lf %d%%",
           first_name, last_name, &gender,
           &birth_year, &birth_month, &birth_day, weekday,
           &c_score, &music_score, &medicine_score,
           &mean, &sd, &rank);
    //%解析输入数据流，并存储到变量中
    //&用来取变量地址
    //数组类型变量本身表示地址，不需&
    //%s与%d不检测空白符; %c检测空白符，在scanf中%c前面添加空白符可以匹配消耗输入的空白符
    //double类型输入时应用%lf
    //%%用于消耗输入时%
    //%s输入时需限定长度

    printf("%s \t %s \t %.3c。\n"
           "%.2d-%d-%d\n"
           "%d \t %d \t %d\n"
           "%.1f \t %.2f %d%%\n",
           first_name, last_name, toupper(gender),
           birth_month, birth_day, birth_year,
           c_score, music_score, medicine_score,
           mean, sd, rank);

    

    return 0;
}