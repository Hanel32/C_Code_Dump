#include <stdio.h>
#include <stdlib.h>

struct list{
  int x;
  struct list *next;
  struct list *prev;
} *base;

void newin(), deleteone(), listhem();

int main()
{
  char ch;

  base = (struct list *) NULL;
  while(1)
  {
    printf("\n\nType 'E/e' to enter a new number, use - number to quit.");
    printf("\n     'D/d' to delete a number from the list");
    printf("\n     'L/l' to list all numbers");
    printf("\n     'Q/q' to quit : ");
    scanf("%s", &ch);
    
    switch(ch)
    {
      case 'E':
      case 'e': newin();
                break;
      case 'D':
      case 'd': deleteone();
                break;
      case 'L':
      case 'l': listhem();
                break;
      case 'Q':
      case 'q': exit(0);
      default : printf("\nEnter only selections listed above!\n");
    }
  }
}

void newin()
{
  int    pos_input = 1;
  struct list *newOne, *p;
  
  newOne = (struct list *) malloc(sizeof (struct list));
  while(pos_input)
  {
    printf("\nEnter new number : ");
    scanf("%d", &(newOne->x));
    if(newOne->x > 0)
    {
      if(base == (struct list *) NULL)
      {
        newOne->next = base;
        base = newOne;
      }
      else
      {
        p = base;
        if(p != NULL && newOne->x >= p->x)
        {
          newOne->next = base;
          base = newOne;
        }
        else
        {
          while(p->next != NULL && p->next->x >= newOne->x)
            p = p->next;
          newOne->next = p->next;
          p->next = newOne;
        }
      }
      newOne = (struct list *) malloc (sizeof (struct list));
    }
    else
      pos_input = 0;
  }
}
void deleteone()
{
  struct list *p;
  int num;

  p = base;
  printf("\nEnter num to delete : ");
  scanf("%d", &num);
  if(base == NULL)
    printf("\nNo number in the list!");
  else
    if(p->x == num)
    {
      base = p->next;
      printf("\n%d is deleted from the list.", num);
    }
    else
    {
      while(p->next != NULL && p->next->x != num)
        p = p->next;
      if(p->next == NULL)
        printf("\n%d is not on the list, try next!", num);
      else
      {
        p->next = p->next->next;
        printf("\n%d is deleted from the list.",num);
      }
    }
}
void listhem()
{
  struct list *thisOne, *p;

  if(base == (struct list *) NULL)
  {
    printf("\nEmpty List\n");
    return;
  }
  else
  {
    printf("\nThe following numbers are in backward (D) order:\n");
    thisOne = base;
    do{
      printf("%d, ", thisOne->x);
      thisOne = thisOne->next;
    }while(thisOne != (struct list *) NULL);
    printf("\nThe following numbers are in forward (A) order:\n");
    p = (struct list *) NULL;
    do{
      thisOne = base;
      for(; thisOne->next != p; thisOne = thisOne->next)
      ;
      printf("%d, ", thisOne->x);
      p = thisOne;
    }while(p != base);
  }
}
        
    
  
