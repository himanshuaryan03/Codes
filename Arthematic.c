#include<stdio.h>
void main ()
{
    int a , b , result;
    float div;
    printf("enter two values:");
    scanf("%d",&a);
    scanf("%d",&b);
    result=a+b;
    printf("sum=%d%d\n",a,b,result);
    printf("diff=%d%d\n",a,b,a-b);
    printf("multi=%d%d\n",a,b,a*b);
    div=a/b;
    printf("div=%d%d=&f\n",a,b,div);
}
