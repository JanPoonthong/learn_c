#include <stdio.h>
#include <math.h>

int main()
{
    printf("Enter a leg: ");
    double a;
    scanf("%lf", &a);
    printf("Enter b leg: ");
    double b;
    scanf("%lf", &b);

    double c = sqrt(a*a + b*b);
    printf("%f", c);
    return 0;
}
