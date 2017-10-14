#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
  int sides, number, roll, mod;
  char more = 'y';
  
  while(more == 'y' || more == 'Y')
  {
    system("cls");
    printf("\n\t\tWelcome traveller, to the D&D dice replacement software!");
    printf("\n\n\t\tDice Sides: ");
    scanf("%d", &sides);
    printf("\n\n\t\tAmount of dice: ");
    scanf("%d", &number);
    printf("\n\n\t\tModifier: ");
    scanf("%d", &mod);
    roll = (number * (rand()%sides)) + mod;
    printf("\n\n\t\tYour roll was: %d", roll);
    printf("\n\n\t\tDo more? (Y/N): ");
    scanf("%s", &more);
  }
}
