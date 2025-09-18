#include <stdio.h>

int main() {
    int n, i;
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter how many times to print: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("%s\n", name);
    }

    return 0;
}
