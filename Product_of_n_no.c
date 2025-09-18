#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        product *= i;
    }
    printf("The product of the first %d numbers is: %lld\n", n, product);

    return 0;
}
