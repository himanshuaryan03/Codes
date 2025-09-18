#include<stdio.h>
void main ()
{
    float a , b , average;
    printf("Enter the value of two numbers");
    scanf("%f%f", &a , &b);
    average = (a+b)/2;
    printf("Average = %.2f\n",average);
}
