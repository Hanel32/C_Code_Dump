// Carson Hanel Test 3 Programs


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
struct PayRec{
  int id;
  char name[15];
  double hr, pRate, tRate;
};
double findGross(struct PayRec x)
{
  double gPay;
  
  gPay = x.hr * x.pRate;
  
  return gPay;     
}
double findTax(struct PayRec *p, double amt)
{
  double tax;
  
  tax = p->tRate * amt;
  
  return tax;
}
int main()
{
  struct PayRec x[] = {{1011, "Doe, John", 25.5, 30.3, .05},
                       {1022, "Baker, Mary", 38.8, 40.2, .07},
                       {1033, "West, Danny", 60.0, 25.8, .12},
                       {1044, "Jackson, Dany", 45., 20.8, .1},
                       {1055, "Johns, Sim", 40., 48.8, .15}};
  int i;
  double gPay, nPay, tax;
  struct PayRec *p = x;
  
  for(i = 0; i < 5; i++, ++p)
  {
    gPay = findGross(x[i]);
    tax  = findTax(p, gPay);
    nPay = gPay - tax;
    printf("\n%-15s\tGrossPay=$%7.2f,\tTax=$%6.2f,\tNetPay=$%7.2f", x[i].name, gPay, tax, nPay);
  }
  getch();
}
*/
void doWork(FILE *in)
{
  float hours, pay, tax, net, gross;
  int id;
  char name[7];

  while(fscanf(in, "%d %s %f %f %f", &id, &name, &hours, &pay, &tax) != EOF)
  {
    net = hours * pay;
    gross = net - (net * tax);
    printf("\n%s\t %d \t  %5.2f   %5.2f   %7.2f   %7.2f" ,name, id, hours, pay, net, gross);
  }
}
int main () 
{  
  FILE *in;
  
  if((in = fopen("test3.txt", "r")) == NULL)
  {
    printf("Can't open file test3.txt");
    exit (1); 
  }
  else 	
  { 
    printf("Name \t  ID \t W-Hours  pRate     Gross      Net");
    doWork(in);
  }
getch();
}

