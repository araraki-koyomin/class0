#include <stdio.h>

#define LEN 10

int main()
{//二分法时间复杂度为logn
    int high, low = 0, mid = 0;
    int dict[LEN] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

    int key = 0;
    scanf("%d", &key);
    high = LEN - 1;

    int index = -1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (key > dict[mid])
        {
            low = mid + 1;
        }
        else if (key < dict[mid])
        {
            high = mid - 1;
        }
        else
        {
            index = mid;
            // break;
            high = mid - 1;//精妙
        }
    }

    printf("%d", index);
    return 0;
}