#include <stdio.h>
#include <math.h>

int main() {
    float radius, area, perimeter;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and perimeter
    area = M_PI * radius * radius;
    perimeter = 2 * M_PI * radius;

    printf("The area of the circle is: %.2f\n", area);
    printf("The perimeter (circumference) of the circle is: %.2f\n", perimeter);

    return 0;
}
