#include <stdio.h>
#include <stdbool.h>

int main()
{
  bool isPizzaHealthy = true;
  printf("Do you believe in the power of pizza? (1 is true and 0 is false): ");
  int temp;
  scanf("%d", &temp);
  isPizzaHealthy = temp;

  if(isPizzaHealthy) {
    printf("Welcome to my pizza program\n");
  } else {
    printf("You're not welcome to my pizza program\n");
  }
}
