#include <stdio.h>
#include <math.h>
#include <stdbool.h>//C99开始
//bool b = 5;可以运行，但是不要用
//int c = b + 1;可以运行，但是不要用
//C23不需要引用库，将 宏定义 升格为 关键字

int main()
{
    int max = 0;
    scanf("%d", &max);
    int count = 0;
    //用于计数素数个数

    for (int num = 2; num <= max; ++num)
    {
        bool is_prime = true;

        for (int fac = 2; fac <= sqrt(num); ++fac)
        {
            //用减少循环个数的方式来降低复杂度
            if (num % fac == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
        {
            printf("%d ", num);
            count++;
        }
    }

    printf("%d", count);

    return 0;
}