#include <stdio.h>
#include <math.h>
#include <conio.h>

float a, b, c, x, x1, x2;
float multi;
int caseC;
char cont = 'y';

int main()
{
  void testModulation();
  
  printf("\n\n\t\tSolve quadratic equation for giving A,B,C coefficient\n");
  while(cont == 'y' || cont == 'Y')
  {
    caseC = 1;
    printf("\n\t\t\tPlease input A: ");
    scanf("%f", &a);
    printf("\n\n\t\t\t\t     B: ");
    scanf("%f", &b);
    printf("\n\n\t\t\t\t     C: ");
    scanf("%f", &c);
    multi = (b*b) - (4.*a*c);
    if(multi > 0)
    {
      caseC = 2;
    }
    else if(multi < 0)
    {
      caseC = 3;
    }
    else if(multi == 0)
    {
      caseC = 4;
    }
    switch(caseC)
    {
      case 1:
      {
        printf("\n\n\t\t\tInvalid entry. The program will now close. Press any button.");
      }
      case 2:
      {
        int testModulation();
      }
      case 3:
      {
        x1 = -b/(2*a);
        x2 = sqrt(-multi)/(2*a);
        printf("\n\t\tTwo complex roots, X1 = %.3f + %.3fi, X2 = %.3f - %.3fi",x1, x2, x1, x2);
        printf("\n\n\t\t\tDo more (Y/N)? ");
        scanf("%s", &cont);
        break;
      }
      case 4:
      {
        if(a == 0 && b == 0 && c == 0)
        {
          printf("\n\t\t\tInfinite Solutions.");
          printf("\n\n\t\t\tDo more (Y/N)? ");
          scanf("%s", &cont);
          break;
        }
        else if(a == 0 && b == 0 && c != 0)
        {
          printf("\n\t\t\tContradict Equation.");
          printf("\n\n\t\t\tDo more (Y/N)? ");
          scanf("%s", &cont);
          break;   
        }
        else
        {
          x1 = (-b + (sqrt(multi)))/(2.*a);
          printf("\n\t\t\tRepeated root, X = %f", x1);
          printf("\n\n\t\t\tDo more (Y/N)? ");
          scanf("%s", &cont);
          break;
        }
      }
      default:
      {
        printf("Invalid input. Try again.");
        break;
      }
    }
  }
  getch();
}
int testModulation()
{
            if(a == 0 && b != 0 && c != 0)
        {
          x = -c / b;
          printf("\n\t\t\tSingle Root. x = %f ", x);
          printf("\n\n\t\t\tDo more (Y/N)? ");
          scanf("%s", &cont);
        }
        else
        {
          x1 = (-b + (sqrt(multi)))/(2.*a);
          x2 = (-b - (sqrt(multi)))/(2.*a);
          printf("\n\t\t\tTwo real roots, X1 = %3.2f, X2 = %3.2f", x1, x2);
          printf("\n\n\t\t\tDo more (Y/N)? ");
          scanf("%s", &cont);
        }
}   
    
