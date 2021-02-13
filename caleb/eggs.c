#include <stdio.h>

// Calculate dozen eggs
int main()
{
  printf("The number of eggs of the day: ");
  int eggs;
  scanf("%i", &eggs);
  double dozen = (double) eggs / 12;
  printf("You have %f dozen eggs.\n", dozen);
  return 0;
}
