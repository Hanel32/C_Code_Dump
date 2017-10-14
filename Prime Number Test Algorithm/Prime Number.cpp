/*
#include <stdio.h>

int main()
{
  int c, n;
  char more = 'y';
  
  while(more == 'y' || more == 'Y')
  {
    printf("\n\t\tPlease input a number to see if it's prime: ");
    scanf("%d", &n);
    for(c = 2; c <= n - 1; c++)
    {
      if(n%c == 0)
      {
        printf("\n\t\t%d is not a prime number.", n);
        printf("\n\t\tDo more? (Y/N): ");
        scanf("%s", &more);
        break;
      }
    }
    if(n == c)
    {
      printf("\n\t\t%d is a prime number.", n);
      printf("\n\t\tDo more? (Y/N): ");
      scanf("%s", &more);
    }
  }
}
*/

#include <stdio.h>
int checkPrime(int);

int main()
{
  int n, result;
  char more = 'y';
  
  while(more == 'y' || more == 'Y')
  {
    printf("\nPlease enter a number to see if it's prime: ");
    scanf("%d", &n);
    result = checkPrime(n);
    if(result == 1)
    {
      printf("\n%d is prime.", n);
      printf("\nDo more? (Y/N): ");
      scanf("%s", &more);
    }
    else if(result == 0)
    {
      printf("\n%d is not prime.", n);
      printf("\nDo more? (Y/N): ");
      scanf("%s", &more);
    }
  }
}
int checkPrime(int n)
{
  int c;
  for(c = 2; c <= n - 1; c++)
  {
    if(n%c == 0)
      return 0;
  }
  if(n == c)
    return 1;
}
  


