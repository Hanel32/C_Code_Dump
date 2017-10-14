#include <stdio.h>

int main()
{
  int num, numOrg, sum;
  char more = 'y';
  
  while(more == 'y' || more == 'Y')
  {
    sum = 0;
    printf("\n\t\t\tInput a number: ");
    scanf("%d", &num);
    numOrg = num;
    for( ;num > 0; )
    {
      sum = sum + (num % 10);
      num = num / 10;
    }
    printf("\n\n\t\t\tThe sum of %d is: %d", numOrg, sum);
    printf("\n\n\t\t\tDo more? (Y/N): ");
    scanf("%s", &more);
  }
}

    
    
