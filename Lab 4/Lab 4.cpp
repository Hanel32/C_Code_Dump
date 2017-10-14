//Lab 4 Notes

#include <stdio.h>
#include <math.h>

int main()
{
  double x;
  double getSin(double x), getCos(double x), getExp(double x), getVariables(double, int);
  char more;
    
  do
  {    
    printf("\n\t\t\tInput X: ");
    scanf("%lf", &x);
    printf("\n\n\t\t\t\tLibraryResult\t MyResult");
    printf("\n\t\tsin(%6.2f)\t%11.6f   %11.6f", x, sin(x), getSin(x));
    printf("\n\t\tcos(%6.2f)\t%11.6f   %11.6f", x, cos(x), getCos(x));
    printf("\n\t\texp(%6.2f)\t%11.6f   %11.6f", x, exp(x), getExp(x));
    printf("\n\t\t\tDo more (Y/N)? ");
    scanf("%s", &more);
  }while(more == 'y' || more == 'Y');
}
/*double getVariables(double x, int n)
{
  double topNum, botNum, outNum, prod;
  int    i;
    
    
    for(i = 0, prod = 1.;i++ < n;prod = prod*x)
    ;
    topNum = prod;    
    
    for(i = 1, prod = 1.; i <= n; prod = prod * i++)
    ;
    botNum = prod;
  
  return topNum/botNum;
}
*/
double getVariables(double x, int n)
{
  if(n == 1)
    return x;
  else
    return getVariables(x , n - 1) * x/n;
}
double getSin(double x)
{
  int i, sign;
  double sum;
  
  for(i = 0, sign = 1, sum = 0.; i < 21; i++, sign = -sign)
    sum = sum + sign * getVariables(x, 2 * i + 1);
    
  return sum;
}
double getCos(double x)
{
  int i, sign;
  double sum;
  
  for(i = 1, sign = -1, sum = 1.; i < 21; i++, sign = -sign)
    sum = sum + sign * getVariables(x, 2 * i);
    
  return sum;
}
double getExp(double x)
{
  int i;
  double sum;
  
  for(i = 1, sum = 1.; i < 21; i++)
    sum = sum + getVariables(x,i);
  
  return sum;
}

  
              
