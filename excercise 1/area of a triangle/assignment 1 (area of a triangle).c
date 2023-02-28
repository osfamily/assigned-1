#include <stdio.h>
int main()
{
    int base,height,area;
    printf("enter the base,\n");
    scanf("%d",&base);
    printf("enter the height,\n");
    scanf("%d",&height);
    area=(base* height)/2;
    printf("the area of the triangle = %.2d\n",area);
    return 0;
}
