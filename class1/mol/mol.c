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