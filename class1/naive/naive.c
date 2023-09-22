#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main()
{
    char first_name[] = "Dayou";
    char last_name[] = "Luo";
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
    double sd = sqrt((pow(c_score - mean, 2) + pow(music_score-mean, 2)+ pow(medicine_score, 2)) / 3);

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

    return 0;
}