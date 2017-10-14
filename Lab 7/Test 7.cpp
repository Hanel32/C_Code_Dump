#include <stdio.h>
#include <conio.h>

double check[3][3] = {0., 0., 0., 0., 0., 0., 0., 0., 0.};

void add(double a[3][3], double b[3][3])
{
  int c, d, e;

  for(c = 0; c < 3; c++)
    for(d = 0; d < 3; d++)
      a[c][d] += b[c][d];
}
void power(double x[3][3], double y[3][3], double z[3][3])
{
  int i, j, k;

  for (i = 0; i < 3; i++) 
    for (j = 0; j < 3; j++)
    {
      z[i][j] = 0;
      for (k = 0; k < 3; k++)
        z[i][j] += (x[i][k] * y[k][j]);
    }
}
void copy(double a[3][3], double b[3][3])
{
  int c, d;
  
  for(c = 0; c < 3; c++)
  {
    for(d = 0; d < 3; d++)
    {
      a[c][d] = b[c][d];
    }
  }
}
void printIt(double i[3][3], double a[3][3])
{
  int c, d;                                                   //Counting integers
  printf("\n\n\n\n\n\t\t       InvA\t\t     InvA * A");
  for(c = 0; c < 3; c++)
  {
    printf ("\n\t\t");
    for (d = 0; d < 3; d++)
    {
      printf ("%5.2f ", i[c][d]);
    }
    printf("\t");
    for (d = 0; d < 3; d++)
    {
      printf("%5.2f ", a[c][d]);
    }
    printf("\n");
  }
}   
double checkIt(double inv[3][3],double a[3][3])
{
  int c, d;
  
  for(c = 0; c < 3; c++)
    for(d = 0; d < 3; d++)
      check[d][c] = inv[c][d] * a[d][c];
}
int main()
{
  double a[3][3] = {{.5,  1., 0.}, {0.,   .6666, 0.}, {-.5, -1.,   .6666}};
  double b[3][3] = {{.5, -1., 0.}, {0., 1-.6666, 0.}, { .5,  1., 1-.6666}};
  double pb[3][3] = {0};
  double temp[3][3] = {0};
  double invA[3][3] = {0};
  double i[3][3] = {{1.,  0., 0.}, {0.,      1., 0.}, { 0.,  0.,      1.}};
  int k;
  
  add(invA, i);
  copy( pb, b );
  copy( temp, b );
  for (k = 0; k < 20; k++)    
  {
    add(invA, temp);
    power(pb, b, temp);
    copy( pb, temp );
  }
  checkIt(invA, a);
  printIt(invA, check);
  getch();
}
