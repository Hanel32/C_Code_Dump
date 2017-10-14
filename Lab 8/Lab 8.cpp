#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>

float totalCost, totalMark, lower, lowerTotal;

void display(float cost, float sale, float quan, char item[5])
{
  float extCost, extMark;

  extCost = cost * quan;
  totalCost = totalCost + extCost;
  extMark = sale * quan;
  totalMark = totalMark + extMark;
  printf("\n    %s \t%4.0f %8.2f %7.2f     %8.2f   %8.2f",item, quan, cost, sale, extCost, extMark);
}
void findlower()
{
  if(totalCost > totalMark)
    lower = totalMark;
  else
    lower = totalCost;
  printf("\n   Total \t\t\t\t $%8.2f  $%8.2f    $%8.2f\n", totalCost, totalMark, lower);
  totalMark  = 0;
  totalCost  = 0;
  lowerTotal = lowerTotal + lower;
  lower      = 0;
}
void doWork(FILE *in)
{
  float cost, sale, extCost, extMark, quan, totalCost, totalMark, lower;
  int prev = 1, dep, i;
  char item[5];
  char *title[] = {"Mens Dept", "Ladies Dept", "Girls Dept", "Boys Dept"}; 

  while(fscanf(in, "%d %s %f %f %f", &dep, &item, &quan, &cost, &sale) != EOF)
  {
    if(dep == prev)
    {
      display(cost, sale, quan, item);
    }
    else
    {
      findlower();
      prev = dep;
      printf ("%s", title[prev - 1]);
      display(cost, sale, quan, item);
    }
  }
}
int main () 
{  
  FILE *in;
  
  if((in = fopen("blinn.txt", "r")) == NULL)
  {
    printf("Can't open file blinn.txt");
    exit (1); 
  }
  else 	
  { 
    printf("\n\n\t\t\t\tBlinn Apparel Store"); 
    printf("\n\n\n\t\t\t Unit  Cost\t       Extended"); 
    printf("\n\t     Quantity \t Cost  Market\t    Cost      Market\tLower Cost");
	printf("\n  Mens Dept");
    doWork(in);
    printf("\n  Inventory at lower cost\t\t\t\t\t$%9.2f", lowerTotal);
  }
getch();
}
