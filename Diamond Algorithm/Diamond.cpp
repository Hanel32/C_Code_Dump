//Diamond extra credit

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
  int total = 0, i, j, size, type, space, o;
  float rows;
  char orig[11] = "0123456789";
  char l[10], r[10];
  char more;
  
  printf("Which diamond would you like to see?");
  printf("\n\nSolid = '1'\nHollow = '2'\nAnswer: ");
  scanf("%d", &type);
  switch(type)
  {
    case 1:
    {
      do
      {
        system("cls");
        printf("\nInput size: ");
        scanf("%d", &size);
        o = 1;
        if(size%2 == 0)
        {
          printf("\nYou entered an invalid number. +1 was added to your entry.\n");
          size = size + 1;
        }
        for(i = 0; i <= size / 2; i++)
        {
          printf("\n\t\t");
          if(i < size / 2 + 1)
          {
            for(j = 0; j < size / 2 - i; j++)
              printf(" ");
            for(j = 0; j < 2 * i + 1; j++)
            {
              printf("*");
              total = total + 1;
            }
          }
        }
        for(i = 1; i <= size - 1; i++)
        {
          if(i >= size / 2 + 1)
          {
            printf("\n\t\t");
            for(j = 1; j <= o; j++)
              printf(" ");
            o++;
            for(j = 1; j < 2 * (size - i); j++)
            {
              printf("*");
              total = total + 1;
            }
          }
        }
        printf("\n\nTotal asterisks used: %d\nTotal rows: %d", total, size);
        printf("\n\nDo more (Y/N): ");
        scanf("%s", &more);
      }while(more == 'y' || more == 'Y');
    }
    case 2:
    {
      system("cls");
      printf("\n\t\t\t   Hollow Diamond\n");
      for(i = 0; i < 10; i++) //Initialize L and R
        l[i] = r[i] = orig[i];
      for(i = 0; i < 9; i++) //Upper half
      {
        printf("\n\t\t\t");
        for(j = 0; j < 10; j++) // Left half
          printf("%c", l[j]);
        l[9 - i] = ' ';
        for(j = 0; j < 10; j++) //Right half
          printf("%c", r[j]);
        r[i] = ' ';
     }
     for(i = 0; i < 11; i++)
     {
       printf("\n\t\t\t");
       for(j = 0; j < 10; j++) // Left half
          printf("%c", l[j]);
        l[i] = orig[i];
        for(j = 0; j < 10; j++) //Right half
          printf("%c", r[j]);
        r[9-i] = orig[9-i];
     }
     getch();
    }
  }
}      
