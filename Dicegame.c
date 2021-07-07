#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));
  int dice[2];

  printf("Rolling the dice...\n");

  for(int i=0;i<2;i++)
  {
    int num = rand() % 7;
    dice[i] = num;
    printf("Dice %d: %d\n",i+1,dice[i]);
  }
  printf("Total value: %d\n",dice[0] + dice[1]);
  if((dice[0] + dice[1]) > 7)printf("You won!\n");
  else printf("You lost!\n");
  return 0;
  }