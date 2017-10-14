#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
  int deci, type; 
  float temp, outTemp;
  char cont = 'y';
  
  while(cont == 'y' || cont == 'Y')
  {
    printf("\n\t\tRelationship between Fahrenheit and Celsius");
    printf("\n\n\t\t\t    1)     F  - >  C");
    printf("\n\t\t\t    2)     C  - >  F");
    printf("\n\n\t\t\tChoice (1/2) ? ");
    scanf("%d", &deci);
    if(deci == 1 && deci != 2)
    {
      printf("\n\n\t\t\tInput F: ");
      scanf("%f", &temp);
      outTemp = (5.0/9.0) * (temp - 32.0);
      printf("\n\n\t\t\t%6.2fF = %6.2fC", temp, outTemp); 
      printf("\n\n\t\t\tDo More (Y/N) ? ");
      scanf("%s", &cont);
      system("cls");
    }
    else if(deci == 2 && deci != 1)
    {
      printf("\n\n\t\t\tInput C: ");
      scanf("%f", &temp);
      outTemp = ((9.0/5.0) * (temp)) + 32.0;
      printf("\n\n\t\t\t%6.2fC = %6.2fF", temp, outTemp); 
      printf("\n\n\t\t\tDo More (Y/N) ? ");
      scanf("%s", &cont);
      system("cls");
    }
    if(deci != 2 && deci != 1)
    {
      system("cls");
      printf("\t\t\t!!!!Invalid input. Retry!!!!");
    }
  } 
}

