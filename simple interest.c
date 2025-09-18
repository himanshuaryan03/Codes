#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Input values
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    interest = (principal * rate * time) / 100;

    // Output result
    printf("Simple Interest = %.2f\n", interest);

    return 0;
}
