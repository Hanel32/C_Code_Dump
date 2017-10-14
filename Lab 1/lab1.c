/*
  This is the first assignment, call it lab1.c
  You should use this chance to get familiar with the system environment,
  such as how to edit a file, compile and run it.
*/

#include <stdio.h>  // Chapter 3
#include <stdlib.h> // Chapter 8

struct date {       // Chapter 12
  int mm, dd, yy;
};
int main()
{
  char   more = 'y';
  char   name[20], phone[15], line[81]; // Chapter 8
  float  weight;
  struct date birth;
  FILE   *inF, *outF, *outP;            // Chapter 10
  outF = fopen ("E:\\data1", "w");      // Chapter 10
  if (outF == NULL)     
  {
    printf ("\n\t\tCan't create file G:\\data1");
    exit (1);
  }
  while (more == 'y' || more == 'Y')   // Chapter 5
  {
    printf ("\n\t\tInput your personal information: ");    
    printf ("\n\t\t\tName: ");
    gets(name);                         // Chapter 10
    printf ("\n\t\t\tBirth (mm/dd/yyyy): ");
    scanf  ("%d/%d/%d", &birth.mm, &birth.dd, &birth.yy);
    printf ("\n\t\t\tWeight: ");
    scanf  ("%f", &weight);
    getchar();                          // Chapter 10
    printf ("\n\t\t\tPhone : ");
    gets (phone);                       // Chapter 10
    fprintf (outF, "\n\t%-20s %2d/%2d/%4d\t\t%7.2f lb.\t%s",
                           name, birth.mm, birth.dd, birth.yy, weight, phone);
    printf ("\n\t\t\tDo more (Y/N) ? ");
    scanf ("%s%c", &more);
  }
  fclose (outF);
  
  inF  = fopen ("E:\\data1", "r");
  outP = fopen ("prn", "w"); // You can use either "lpt1" or "prn" for
                             // printer output, and you pay $.07/page
  if (inF == NULL)     
  {
    printf ("\nCan't open the input file");
    exit (1);
  }
  fprintf (outP, "\n\n\n\n\n\t\t    This is lab 1, made by Carson Hanel");
  fprintf (outP, "\n\n\t  Name\t\t\tB-date\t\t   Weight\t     Phone");
  while (fgets(line, 80, inF) != NULL)
    fprintf (outP, "%s", line);
  fclose (inF);
  fclose (outP);
  }
