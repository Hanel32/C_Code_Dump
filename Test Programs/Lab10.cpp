//lab 10
#include <conio.h>
#include <stdio.h>

int main ()
{
	char x[31], y[31], z[31];
	char more = 'y', cbase;
	int i, j, k, ileg, base, lenx, leny, maxy;
	
	while (more == 'y' || more == 'Y')   {
		printf ("\n\tIn this program, you can add two numbers up to 30 digits");
		printf ("long\n\t\t\tin different number systems");
		for (          ;           ;          )  {
			printf ("\n\n\n\t\tPlease input your base (B, O, D, H) : ");
			scanf  ("%s", &cbase);
			if (cbase == 'b' || cbase == 'B' || cbase == 'o' || cbase == 'O'|| cbase == 'd' || cbase == 'D'|| cbase == 'h' || cbase == 'H')
			   break;
			else   { 
			   printf ("\n\t\tYour input is not either B/b, O/o, D/d, or H/h,");
			   printf ("Try again...");
			}
		}
	
	switch (cbase)   {
		case 'b':
		case 'B': base = 2;
				  break; 
	    case 'o':
		case 'O': base = 8;
				  break; 
		case 'd':
		case 'D': base = 10;
				  break; 
		case 'h':
		case 'H': base = 16;
				  break; 
		default : printf ("\n\tYour input base is not found in this program.");
	}
	ileg = 0;
	while (!ileg)   {
		printf ("\n\t\tInput the first number : ");
		scanf  ("%s", x);
		for (i = 0; x[i] != '\0'; ++i)
		   if (base == 2 || base == 8 || base == 10)
		      x[i] -= '0';
		   else
		      if (x[i] >= 'a' && x[i] <= 'f')
		         x[i] -= 'a' - 10;
		      else
		         if (x[i] >= 'A' && x[i] <= 'F')
		            x[i] -= 'A' - 10;
		         else 
		            x[i] -= '0';
		lenx = i;
		
		for (k = 0, ileg = 0; k < lenx; ++k)
		   if (x[k] >= base || x[k] < 0)
		      ileg = 1;
		   if (ileg)   {
		   	  printf ("\n\t\tYour input is not valid digits, try again!");
		   	  ileg = 0;
		   }
		   else
		      ileg = 1;
	}
	
	ileg = 0;
		while (!ileg)   {
		printf ("\n\t\tInput the second number : ");
		scanf  ("%s", y);
		for (i = 0; y[i] != '\0'; ++i)
		   if (base == 2 || base == 8 || base == 10)
		      y[i] -= '0';
		   else
		      if (y[i] >= 'a' && y[i] <= 'f')
		         y[i] -= 'a' - 10;
		      else
		         if (y[i] >= 'A' && x[i] <= 'F')
		            y[i] -= 'A' - 10;
		         else 
		            y[i] -= '0';
		lenx = i;
		
		for (k = 0, ileg = 0; k < leny; ++k)
		   if (y[k] >= base || y[k] < 0)
		      ileg = 1;
		   if (ileg)   {
		   	  printf ("\n\t\tYour input is not valid digits, try again!");
		   	  ileg = 0;
		   }
		   else
		      ileg = 1;
	}
	
	for (i = lenx - 1; i >= 0; i--)
	   x[31 - lenx + i] = x[i];
	for (i = 30 - lenx; i >= 0; x[i--] = 0)
	   ;
	for (i = leny - 1; i >= 0; i--)
	   y[31 - leny + i] = y[i];
	for (i = 30 - leny; i >= 0; y[i--] = 0)
	   ;
	   
	maxy = (lenx >= leny) ? lenx : leny;
	
	for (i = 0; i < 31; z[i++] = 0)
	   ;
	for (i = 30; i >= 30 - maxy; --i)   {
		z[i] = z[i] + x[i] + y[i];
		if (z[i] >= base)   {
		   z[i] -= base;
		   z[i - 1] += 1;
		}
	}
	printf ("\n\n\t\tThe sum of these numbers is ");
	while (z[i++] == 0)
	   ;
	if (i > 31)
	   printf ("0");
	else
	   for (j = i - 1; j < 31; ++j)
	      if (base == 2 || base == 8 || base == 10)
	         printf ("%c", z[j] + '0');
	      else
	         if (z[j] < 10)
	            printf ("%c", z[j] + '0');
	         else
	            printf ("%c", z[j] + 'A' - 10);
	printf ("\n\n\t\tDo more (Y/N) ? ");
	scanf  ("%s", &more);
	}
}
