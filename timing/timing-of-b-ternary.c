#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//计时操作
#include <time.h>

#define LEN 40

int n, leng;
char s[LEN], b_ternary[LEN];
int anti_ternary[LEN], ternary[LEN];
int ten;
int main()
{
    time_t start = time(NULL);
    //计时开始
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    { 
        gets(s); 
        leng = strlen(s);
        int j = 0;
        if (s[0] == '-')
        { 
            j++;
        }

        while (j < leng)
        { 
            if ((s[j] >= '0') && (s[j] <= '9'))
            {
                ten = 10 * ten + s[j] - '0';
                j++;
            }
            else
            { 
                printf("Radix Error");
                goto NPLUS;
            }
        }
        if (ten == 0)
        { 
            printf("0");
            goto NPLUS;
        }
        int h = 0;
        while (ten > 0)
        { 
            anti_ternary[h] = ten % 3;
            ten = ten / 3;
            h++;
        }
        int k = 0;
        while (k < h)
        {
            ternary[k + 1] = anti_ternary[h - k-1];
            k++;   
        }
        int l = k;
        while (k >= 0)
        {
            if (ternary[k] == 0)
            {
                b_ternary[k] = '0';
            }
            else if (ternary[k] == 1)
            {
                b_ternary[k] = '1';
            }
            else if (ternary[k] == 2)
            {
                b_ternary[k] = 'Z';
                ternary[k - 1]++;  
            }
            else if (ternary[k] == 3)
            {
                b_ternary[k] = '0';
                ternary[k - 1]++;
            }
            k--;
        }

        if (s[0] == '-')
        { 
            for (int m = 0; m <= l; m++)
            {
                if (b_ternary[m] == '1')
                {
                    b_ternary[m] = 'Z';
                }
                else if (b_ternary[m] == 'Z')
                {
                    b_ternary[m] = '1';
                }
            }
        }
        if (b_ternary[0] == '0')
        {
            for (int m = 1; m <= l; m++)
            {
                printf("%c", b_ternary[m]);
            }
        }
        else
        { 
            for (int m = 0; m <= l; m++)
            {
                printf("%c", b_ternary[m]);
            }
        }
    NPLUS:
        printf("\n");
        ten = 0;
        memset(ternary,0,sizeof(ternary));
        memset(b_ternary, 0, sizeof(b_ternary));
        memset(anti_ternary, 0, sizeof(anti_ternary));
        memset(s, 0, sizeof(s));
    }
    //计时结束
    time_t end = time(NULL);

    //输出时间
    printf("Time elapsed: %ld seconds\n", end - start);

    return 0;
}