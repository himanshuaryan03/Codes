#include <stdio.h>

int main() {
    float principal1, rate1, time1, interest1;
    float principal2, rate2, time2, interest2;
    float principal3, rate3, time3, interest3;
    printf("Enter Principal, Rate and Time for the first set:\n");
    scanf("%f %f %f", &principal1, &rate1, &time1);
    printf("Enter Principal, Rate and Time for the second set:\n");
    scanf("%f %f %f", &principal2, &rate2, &time2);
    printf("Enter Principal, Rate and Time for the third set:\n");
    scanf("%f %f %f", &principal3, &rate3, &time3);
    interest1 = (principal1 * rate1 * time1) / 100;
    interest2 = (principal2 * rate2 * time2) / 100;
    interest3 = (principal3 * rate3 * time3) / 100;
    printf("\nSimple Interest for the first set: %.2f\n", interest1);
    printf("Simple Interest for the second set: %.2f\n", interest2);
    printf("Simple Interest for the third set: %.2f\n", interest3);

    return 0;
}
