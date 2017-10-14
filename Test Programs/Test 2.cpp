/*
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
      printf("\nY\n");
      printf("\nDo more? (Y/N): ");
      scanf("%s", &more);
    }
    else if(result == 0)
    {
      printf("\nN\n");
      printf("\nDo more? (Y/N): ");
      scanf("%s", &more);
    }
  }
}
int checkPrime(int n)
{
  int c;
  
  for(c = 2; c <= n / 2; c++)
  
    if(n%c == 0)
      return 0;  //Not prime
   
  return 1;   //Prime
}

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  void giveStatus(int, int);
  int n, status, checkIt(int);
  char more;
  
  do
  {
    printf("Please enter a number to see its status: ");
    scanf("%d", &n);
    giveStatus(checkIt(n), n);
    printf("\nDo more? (Y/N): ");
    scanf("%s", &more);
    printf("\n");
  }while(more == 'y' || more == 'Y');
}
int checkIt(int n)
{
  int x, i, tot = 0;

  x = n;
  for(i = 1; i < n; i++)
  {
    if(n%i == 0)
      tot = tot + i;
  } 
  if(tot > n)
    return 0;
  if(tot < n)
    return 1;
  if(tot == n)
    return 2; 
}
void giveStatus(int x, int n)
{
  switch(x)
  {
    case 0:
    {
      printf("\nThe number %d is abundant.\n", n);  
      break;
    }
    case 1:
    {
      printf("\nThe number %d is deficient.\n", n);
      break;
     }
    case 2:
    {
      printf("\nThe number %d is perfect.\n", n); 
      break;
    }
  }
}

