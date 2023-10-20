#include <stdio.h>

int main()
{
    int n = 0, num = 0;
    scanf("%d", &num);

    do
    {
        num /= 10;
        n++;
    } while (num > 0);//注意分号
    //先进行一次，再进行判断
    
    printf("%d\n", n);

    return 0;
}