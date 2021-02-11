#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  int max = 5;
  int random = rand() % max + 1;
  printf("Guess a number 0 - %d: ", max);

  int input;
  scanf("%d", &input);

  if(input == random) {
    printf("You win\n");
  } else {
    printf("You lose\n");
  }
}
