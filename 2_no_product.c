#include <stdio.h>

int main() {
    int num1, num2, product;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate the product
    product = num1 * num2;

    // Output the product
    printf("The product of %d and %d is %d\n", num1, num2, product);

    return 0;
}
