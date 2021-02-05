#include <stdio.h>

// Calculate the area of a circle with radius
int main()
{
    printf("The a radius: ");
    int radius;
    scanf("%i", &radius);
    double area = 3.14159 * (radius * radius);
    printf("The area of a circle with %i radius is %f\n", radius, area);
    return 0;
}
