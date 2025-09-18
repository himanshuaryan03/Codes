#include<stdio.h>
void main ()
{
  int a , b , temp ;
  printf("enter the value of two numbers");
  scanf("%d%d",&a , &b);
  temp = a;
  a = b;
  b = temp;
  printf("after swapping:\n");
  printf("a = %d\n" ,a );
  printf("b = %d\n",b);

  return 0;
}
