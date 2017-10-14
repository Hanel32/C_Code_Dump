#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct file {
  char name [20];
  char address [30];
  char city [20];
  char st [3];
  char zip[6];
  int age;
};

int main()
{
  int i, j, flag = 1, jump = 20, frst, last, mid, deci, hold, tgt;
  char more= 'Y';
  char stgt[6];
  struct file temp;
  struct file data[] ={
    {"John J. Doe",      "202 Harvey Rd",       "College Station", "TX", "77450", 29},
    {"Tama Martin",      "202 College Main",    "Houston",         "TX", "72002", 10},
    {"Dick Simmons",     "Box 1010",            "El Paso",         "TX", "72081", 55},
    {"Udo Pooch",        "1004 Windwood",       "Houston",         "TX", "02400", 80},
    {"Aarron Stein",     "1000 Spicewood",      "New York",        "NY", "23932", 90},
    {"Steve Jobs",       "2082 RainTree",       "College Station", "TX", "30020", 45},
    {"Robert Ricks",     "8378 University DR.", "Bryan",           "TX", "72001", 25},
    {"Richard Ticks",    "2498 C. Main",        "Los Angeles",     "CA", "20020", 18},
    {"Tim Safferd",      "3303 George Bush Dr.","Bryan",           "TX", "20200", 12},
    {"Richard Thamos",   "7438 RoseMerry",      "Salt Lake",       "UT", "83298", 73},
    {"Mary Hart",        "3998 Hallow St",      "Anthem",          "CA", "00329", 30},
    {"Todd Hoffer",      "2939 Univ. Blvd.",    "Huntsville",      "AL", "23890", 63},
    {"Shannon Shoumaker","2300 Decon",          "Dallas",          "TX", "73999", 24},
    {"Mike Meeks",       "Box 2839",            "Paris",           "TX", "72990", 43},
    {"Mikey Monique",    "Box 3899",            "Kansas City",     "MO", "38982", 65},
    {"Joe Montana",      "10000 Hardwood",      "San Francisco",   "CA", "83999", 33},
    {"Tom Landry",       "48923 Software",      "Seattle",         "WN", "43223", 13},
    {"Larry Bird",       "3298 Hilow Ln",       "Kauffman",        "AK", "84920", 39},
    {"Denis Cohen",      "Box 2399",            "Las cruis",       "NM", "73289", 28},
    {"Fay Maybree",      "399 Harvey Rd",       "Wisconsin",       "MO", "48299", 32},
  };
  
  printf("\n\nIf you would like to sort by age, enter 1.");
  printf("\nIf you would like to sort by zip, enter 2.");
  printf("\nAnswer: ");
  scanf("%d", &deci);
  switch(deci)
  {
    case 1:
    {
      printf ("\n\n Sort by age in increasing order.  (BUBBLE SORT)\n");
      for (i = 0;    i < 20;  i++)
        for (j = 0;  j < 20;  j++)
          if (data[j].age > data[j+1].age) 
          {
            temp = data[j];
            data[j] = data[j+1];
            data[j+1] = temp;
          }
      for (i = 0; i < 20; i++)
        printf ("\t%20s\t%.5s\t%7d\n", data[i].name, data[i].zip, data[i].age);
      printf ("\nHit any key to continue . . .");
      system ("pause");
      printf ("\n\nSort by age in decreasing order.  (SHELL SORT)\n");
      for (jump = jump / 2; jump > 0; flag = 1, jump = jump / 2)  
      {
        while  (flag == 1)     
        {
          flag = 0;
          for (i = 0; i < 20 - jump; i++ )
            if (data[i].age < data [i +jump].age)     
            {
              temp = data[i];
              data[i] = data[i+jump];
              data[i+jump] = temp;
              flag = 1;
            }          
        }
      }
      for (i = 0; i < 20; i++)
        printf ("\t%-20s\t%7.5s\t%6d\n", data[i].name, data[i].zip, data[i].age);
      printf ("\nHit any key to continue . . .");
      system ("pause");
      while (more == 'y' || more == 'Y') 
      {
        printf("\n\nPlease input an age to search : "); scanf ("%d", &tgt);
        frst = 0; last = 19; flag = 1;
        while (frst <= last && flag == 1)  
        {
          mid = (frst + last )/2;
          if (data [mid].age == tgt)  
          {
            printf ("\n\n\t\tI am lucky, data at position %d", mid + 1);
            printf ("\n\t%s,%s, %s, %.2s %.5s age = %d", data[mid].name,
                    data[mid].address, data[mid].city, data[mid].st, 
                    data[mid].zip, data[mid].age);
            flag = 0;
          }
          else 
            if (data[mid].age > tgt)
              frst = mid + 1;
            else 
              last = mid - 1;
       }
       if (flag == 1)
         printf ("\n\n\t\tSorry! Your input is not found in this array. . .");
       printf ("\n\n\t\tDo more (Y/N) ? ");
       scanf  ("%s", &more);
      }
    }
    case 2:
    {
      printf ("\n\n Sort by zip in increasing order.  (BUBBLE SORT)\n");
      for (i = 0;    i < 20;  i++)
        for (j = 0;  j < 20;  j++)
          if(strcmp(data[j].zip, data[j+1].zip) > 0) 
          {
            temp = data[j];
            data[j] = data[j+1];
            data[j+1] = temp;
          }
      for (i = 0; i < 20; i++)
        printf ("\t%20s\t%.5s\t%7d\n", data[i].name, data[i].zip, data[i].age);
      printf ("\nHit any key to continue . . .");
      system ("pause");
      printf ("\n\nSort by zip in decreasing order.  (SHELL SORT)\n");
      for (jump = jump / 2; jump > 0; flag = 1, jump = jump / 2)  
      {
        while  (flag == 1)     
        {
          flag = 0;
          for (i = 0; i < 20 - jump; i++ )
            if (strcmp(data[i].zip, data[i+jump].zip) < 1)     
            {
              temp = data[i];
              data[i] = data[i+jump];
              data[i+jump] = temp;
              flag = 1;
            }          
        }
      }
      for (i = 0; i < 20; i++)
        printf ("\t%-20s\t%7.5s\t%6d\n", data[i].name, data[i].zip, data[i].age);
      printf ("\nHit any key to continue . . .");
      system ("pause");
      while (more == 'y' || more == 'Y') 
      {
        printf("\n\nPlease input a zip to search : "); 
        scanf ("%s", &stgt);
        frst = 0; last = 19; flag = 1;
        while (frst <= last && flag == 1)  
        {
          mid = (frst + last )/2;
          if (strcmp(data[mid].zip, stgt) == 0)  
          {
            printf ("\n\n\t\tI am lucky, data at position %d", mid + 1);
            printf ("\n\t%s,%s, %s, %.2s %.5s age = %d", data[mid].name,
                    data[mid].address, data[mid].city, data[mid].st, 
                    data[mid].zip, data[mid].age);
            flag = 0;
          }
          else 
            if (strcmp(data[mid].zip, stgt) >= 1)
              frst = mid + 1;
            else 
              last = mid - 1;
       }
       if (flag == 1)
         printf ("\n\n\t\tSorry! Your input is not found in this array. . .");
       printf ("\n\n\t\tDo more (Y/N) ? ");
       scanf  ("%s", &more);
      }
    } 
  }
  return 0;
}
