#include <stdio.h>

#define NUM 5

int main()
{
    // int[5] (not int[])
    // int[3]
    int numbers[NUM] = {[0] = 1968, [1] = 1961, [2] = 1969, [3] = 1954, [4] = 1969};
    //const int NUM 是 VLA (variable-length array可变长数组)，不建议这样做

    int min = numbers[0];
    //通过下标存储或获取

    //for (*init clause; **condition expression; ***iteration expression) ****loop-body
    //( steps:* turns to **
    //        **==1, turns to ****, turns to ***, turns to checking **
    //        **!=1, exit the loop  )
    for (int i = 1;i < NUM;i++){
        if (min > numbers[i]){
            min = numbers[i];
        }
    }

    printf("min = %d\n", min);
    return 0;
}