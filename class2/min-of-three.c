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