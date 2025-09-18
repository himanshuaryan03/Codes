#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    if (a % 3 == 0 && a % 5 == 0) {
        printf("a is divisible by both 3 and 5\n");
    } else if (a % 3 == 0) {
        printf("a is divisible by only 3\n");
    } else if (a % 5 == 0) {
        printf("a is divisible by only 5\n");
    } else {
        printf("a is not divisible by 3 or 5\n");
    }
    if (b % 3 == 0 && b % 5 == 0) {
        printf("b is divisible by both 3 and 5\n");
    } else if (b % 3 == 0) {
        printf("b is divisible by only 3\n");
    } else if (b % 5 == 0) {
        printf("b is divisible by only 5\n");
    } else {
        printf("b is not divisible by 3 or 5\n");
    }

    return 0;
}
