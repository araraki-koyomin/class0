#include <stdio.h>
int main()
{
    const double PI = 3.14159;
    int radius = 100;

    double surface_area = 4 * PI * radius * radius;
    //surfaceArea也可
    double volumn = 4.0 / 3 * PI * radius * radius * radius;
    //4/3会向下取整，4.0/3不会
    printf("%-15.4f : surface area\n%-15.4f : volumn\n", surface_area, volumn);
    //15指右对齐，且补足15个字符
    //-指左对齐

    return 0;
}