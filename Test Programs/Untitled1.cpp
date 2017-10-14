/*
Carson Hanel Code


#include <stdio.h>
#include <conio.h>

int main()
{
  float f, c;

  printf("|Fahrenheit\t  Celcius|");
  printf("\n|------------------------|");
  for(f = 100; f >= 0; f = f - 5)
  {
    c = ((9./5.) * f) + 32;
    printf("\n|%6.0f       =    %6.0f|",f , c);
  }
  printf("\n|________________________|");
  getch();
}
*/

#include <stdio.h>
#include <conio.h>

int main()
{
  int outNum = 0, n = 0, i, sum, check;

  for(i = 0; i < 20; i++)
  {
    sum = n + (i + 1);
    n = sum;
    printf("\nThe next value is: %d", sum);
    outNum = outNum + sum;
  }
  printf("\n\nThe total is: %d", outNum);
  getch();
}
