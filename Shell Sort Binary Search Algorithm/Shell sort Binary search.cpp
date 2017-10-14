// Shell Sort
/*
 * C Program to Perform Shell Sort without using Recursion
 */
#include  <stdio.h>
#define size 7
 
/* Function Prototype */
int shell_sort(int []);
 
void main()
{
    int arr[size], i;
    printf("Enter the elements to be sorted:");
    for (i = 0;i < size;i++)
    {
        scanf("%d", &arr[i]);
    }
    shell_sort(arr);
    printf("The array after sorting is:");
    for (i = 0;i < size;i++)
    {
        printf("\n%d", arr[i]);
    }
}
 
/* Code to sort array using shell sort */
int shell_sort(int array[])
{
    int i = 0, j = 0, k = 0, mid = 0;
    for (k = size / 2;k > 0;k /= 2)
    {
        for (j = k;j < size;j++)
        {
            for (i = j - k;i >= 0;i -= k)
            {
                if (array[i + k] >= array[i])
                {
                    break;
                }
                else
                {
                    mid = array[i];
                    array[i] = array[i + k];
                    array[i + k] = mid;
                }
            }
        }
    }
    return 0;
}

// Binary Search
#include <stdio.h>
 
int main()
{
   int c, first, last, middle, n, search, array[100];
 
   printf("Enter number of elements\n");
   scanf("%d",&n);
 
   printf("Enter %d integers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);
 
   printf("Enter value to find\n");
   scanf("%d", &search);
 
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;    
      else if (array[middle] == search) {
         printf("%d found at location %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;
 
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", search);
 
   return 0;   
}
