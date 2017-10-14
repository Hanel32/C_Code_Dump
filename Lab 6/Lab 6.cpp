#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int dateCheck(int m, int d, int y)
{  
  if(d > days[m-1] || d <= 0 || m > 12 || m < 1)
    return 0;
  else
    return 1;
}
int dateCheckTwo(int m, int d, int newDays[11])
{
  if(d > newDays[11] || d <= 0 || m > 12 || m < 1)
    return 0;
  else
    return 1;
}
int leap(int x)
{
  if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
    return 1;
  else
    return 0;
}
int countIt(int m, int d, int y)
{
  int i, past = 0;
  
  if(leap(y))
    days[1] = 29;
    
  if(dateCheck(m, d, y))
  {
    for (i = 0; i < m - 1; i++)
      past = past + days[i];
    past = past + d;
  }
  return past;
}
void findDate(int d, int y)
{
  int i, m, daysMonth, sum = 0;
  int newDays[11];
  
  if(leap(y))
    days[1] = 29;

  for(i = 0; i <= 11; i++)
  {
    newDays[i] = sum + days[i];
    sum = sum + days[i];
  }
  for(i = 0; i <= 11 ;i++)
  {
    if(d <= newDays[i])
    {
      m = i + 1;
      break;
    }
  }
  if(i > 0)
    daysMonth = d - newDays[i-1];
  else
    daysMonth = d;
  if(dateCheck((i+1), daysMonth, y))
    printf("\n\n\t\tThe date is %d/%d/%d", (i+1), daysMonth, y);
  else
    printf("\n\n\t\tInvalid number of days for the given year.");
}
int main()
{
  char more;
  int  mm, dd, yy, choice;
  
  do{
    system("cls");
    printf("\n\n\tThis program will find days passed or date in the year.");
    printf("\n\t\t\t1)  Input date (mm/dd/yyyy) to find days passed.");
    printf("\n\t\t\t2)  Input passed days to find date in the year.");
    printf("\n\n\t\t\tYour choice (1/2): ");
    scanf("%d", &choice);
    switch(choice)
    {
      case 1:
      {
        days[1] = 28;
        printf("\n\t\tPlease input date (mm/dd/yyyy): ");
        scanf ("%d/%d/%d", &mm, &dd, &yy);
        if(countIt(mm, dd, yy))
        {
          printf("\n\t\tThere are %d days passed in the year %d", countIt(mm, dd, yy), yy);
          printf("\n\n\t\tDo more (Y/N) ? ");
          scanf("%s", &more);
          break;
        }
        else
        {
          printf("\n\t\tInvalid entry under one or more criteria.");
          printf("\n\n\t\tDo more? (Y/N): ");
          scanf("%s", &more);
          break;
        }
      }
      case 2:
      {
        days[1] = 28;
        printf("\n\n\t\tInput days: ");
        scanf("%d", &dd);
        printf("\n\n\t\t     Years: ");
        scanf("%d", &yy);
        findDate(dd, yy);
        printf("\n\n\t\tDo more? (Y/N): ");
        scanf("%s", &more);
        break;
      }
      default:
      {
        printf("\n\t\tInvalid decision.");
        printf("\n\n\t\tDo more? (Y/N): ");
        scanf("%s", &more);
        break;
      }
    }
  }while(more == 'y' || more == 'Y');
}
