#include <stdio.h>
#include <math.h>

int main()
{
  float x, x1, x2;
  float a, b, c;
  float multi;
  char cont = 'y';
  
  printf("\n\n\t\tSolve quadratic equation for giving A,B,C coefficient\n");
  while(cont == 'y' || cont == 'Y')
  {
    printf("\n\t\t\tPlease input A: ");
    scanf("%f", &a);
    printf("\n\n\t\t\t\t     B: ");
    scanf("%f", &b);
    printf("\n\n\t\t\t\t     C: ");
    scanf("%f", &c);
    multi = (b*b) - (4.*a*c);
    if(a == 0 && b == 0 && c == 0)
    {
      printf("\n\t\t\tInfinite Solutions.");
      printf("\n\n\t\t\tDo more (Y/N)? ");
      scanf("%s", &cont);
    }
      else if(a == 0 && b == 0 && c != 0)
      {
        printf("\n\t\t\tContradict Equation.");
        printf("\n\n\t\t\tDo more (Y/N)? ");
        scanf("%s", &cont);
      }
        else if(a == 0 && b != 0 && c != 0)
        {
          x = -c / b;
          printf("\n\t\t\tSingle Root. x = %3.2f ", x);
          printf("\n\n\t\t\tDo more (Y/N)? ");
          scanf("%s", &cont);
        }
          else if(a == 0 && b != 0 && c == 0)
          {
            x = c / b;
            printf("\n\t\t\tSingle Root. x = %3.2f ", x);
            printf("\n\n\t\t\tDo more (Y/N)? ");
            scanf("%s", &cont); 
          }
        else if(multi > 0)
        {
          x1 = (-b + (sqrt(multi)))/(2.*a);
          x2 = (-b - (sqrt(multi)))/(2.*a);
          printf("\n\t\t\tTwo real roots, X1 = %3.2f, X2 = %3.2f", x1, x2);
          printf("\n\n\t\t\tDo more (Y/N)? ");
          scanf("%s", &cont);
        }
        else if(multi < 0)
        {
          x1 = -b/(2*a);
          x2 = sqrt(-multi)/(2*a);
          printf("\n\t\tTwo complex roots, X1 = %.3f + %.3fi, X2 = %.3f - %.3fi",x1, x2, x1, x2);
          printf("\n\n\t\t\tDo more (Y/N)? ");
          scanf("%s", &cont);
        }
        else if(multi == 0)
        {
          x1 = (-b + (sqrt(multi)))/(2.*a);
          printf("\n\t\t\tRepeated root, X = %3.2f", x1);
          printf("\n\n\t\t\tDo more (Y/N)? ");
          scanf("%s", &cont);
        }
    }
  return 0;
}
