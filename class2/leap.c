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