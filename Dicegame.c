#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));
  int dice[2];

  char name[50];
  printf("What is your name? ");
  scanf("%s",name);
  printf("Hello, %s!",name);

  printf("Rolling the dice...\n");

  for(int i=0;i<2;i++)
  {
    int num = rand() % 7;
    dice[i] = num;
    printf("Dice %d: %d\n",i+1,dice[i]);
  }
  printf("Total value: %d\n",dice[0] + dice[1]);
  if((dice[0] + dice[1]) > 7)printf("%s won!\n",name);
  else printf("%s lost!\n",name);
  return 0;
  }