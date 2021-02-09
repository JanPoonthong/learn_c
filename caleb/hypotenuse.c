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

    double c = a*a + b*b;
    double result = sqrt(c);
    printf("%f", result);
    return 0;
}
