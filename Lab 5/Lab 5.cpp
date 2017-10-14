#include <stdio.h>
#include <conio.h>

int size = 21, mid;

int main()
{
  int x[] = {99,86,78,65,66,79,29,44,15,92,59,48,44,31,27,26,24,19,15,8,1};
  int search;
  char more;
  void searchIt(int x[], int x);
  void sortIt(int x[]);
  void printIt(int x[]);
  
  printf("\n\tUnsorted Seq: ");
  printIt(x);
  printf("\n\tSorted   Seq: ");
  sortIt(x);
  printIt(x);
  do{
    printf("\n\t\tInput a number: ");
    scanf("%d", &search);
    searchIt(x, search);
    printf("\n\t\t\tDo more? (Y/N): ");
    scanf("%s", &more);
  }while(more == 'y' || more == 'Y');
}
void sortIt(int x[])
{
  int i, temp, flag = 0;
  int d = size / 2;
  
  while(d > 0)
  {
    for(i = 0; i < (size - d); i++)
    {
      if(x[i+d] < x[i])
      {
        temp = x[i+d];
        x[i+d] = x[i];
        x[i] = temp;
        flag = 1;
      }
    }
    if (flag == 0)
      d = d / 2;      
    else
      flag = 0;    
  }
}
void printIt(int x[])
{
  int i;
  
  for(i = 0; i < size; i++)
    printf("%d,", x[i]);
}
void searchIt(int x[],int a)
{
  int first, last, middle;
  
  first = 0;
  last  = 15;
  middle = (first + last) / 2;
  
  while(first<= last)
  {
    if(x[middle] < a)
      first = middle + 1;
    else if(x[middle] == a)
    {
      printf("\n\t\t%d is found at position %d", a, middle + 1);
      break;
    }
    else
      last = middle - 1;
    middle = (first + last) / 2;
  }
  if(first > last)
    printf("\n\t\t%d is not found.", a);
}
    
    
