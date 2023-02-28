#include<stdio.h>
int main()
{
    float x,y,result;
    printf("\n fill in x \n");
    scanf("%f",&x);
    printf("\n fill in y \n");
    scanf("%f",&y);
    result=x/y;
    if(y=0){printf("\n math error \n");}
    else
   {printf("\n ANSWER=%f \n",result);}
    return 0;
}
