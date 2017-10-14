#include <stdio.h>
#include <conio.h>

int main()
{
  int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int newDays[11];
  int i, sum = 0;
  
  for(i = 0; i <= 11; i++)
  {
    newDays[i] = sum + days[i];
    sum = sum + days[i];
  }
  printf("Jan %d, Feb %d, Mar %d, Apr %d", newDays[0], newDays[1], newDays[2], newDays[4]);
  getch();  
}
