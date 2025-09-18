#include <stdio.h>

int main() {
    int day;

    // Input the day number (1 to 7)
    printf("Enter a number (1 to 7) to get the day of the week: ");
    scanf("%d", &day);

    // Using switch-case to print the day
    switch(day) {
        case 1:
            printf("1 corresponds to Sunday\n");
            break;
        case 2:
            printf("2 corresponds to Monday\n");
            break;
        case 3:
            printf("3 corresponds to Tuesday\n");
            break;
        case 4:
            printf("4 corresponds to Wednesday\n");
            break;
        case 5:
            printf("5 corresponds to Thursday\n");
            break;
        case 6:
            printf("6 corresponds to Friday\n");
            break;
        case 7:
            printf("7 corresponds to Saturday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
