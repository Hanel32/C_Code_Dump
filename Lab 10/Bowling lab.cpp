#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int ballOne[11], ballTwo[10], score[10];
int doNext = 1;
int flag   = 0;

int checkItIll(int i,int j, int y)
{ 
  if(i <= 10 && i >= 0 && y == 1)
    return 1;
  if((ballOne[j] + ballTwo[j]) <= 10 && (ballOne[j] + ballTwo[j]) >= 0 && ballTwo[j] > 0)
    return 1;
  if(i > 10 || i < 0)
    return 0;  
  if((ballOne[j] + ballTwo[j]) > 10 && y == 2)
    return 0;
}
void illegal(int num, int iter, int ball)
{
  while(flag == 0)
  {
    printf("\t\t\t\tIllegal input. Try again.");
    if(ball == 1)
    {
      printf("\n\t\tBall - %d : ", ball);
      scanf("%d", &ballOne[iter]);
      flag = checkItIll(ballOne[iter], iter, ball); 
    }
    if(ball == 2)
    {
      printf("\n\t\tBall - %d : ", ball);
      scanf("%d", &ballTwo[iter]);
      flag = checkItIll(ballTwo[iter], iter, ball); 
    }
    if(ball == 3)
    {
      printf("\n\t\tExtra - %d : ", iter-9);
      scanf("%d", &ballOne[iter]);
      flag = checkItIll(ballOne[iter], iter, ball); 
    }
  }
  flag = 0;
}
void checkIt(int i,int j, int y)
{ 
  if(i <= 10 && i >= 0 && y == 1)
    return;
  if(i > 10 || i < 0)
    illegal(i, j, y); 
  if((ballOne[j] + ballTwo[j]) > 10 && y == 2)
    illegal(i, j, y);
}
void extra(int i)
{
  int j;
  
  for(j = 0; j < i; j++)
  {
    printf("\n\t\tExtra - %d: ", j + 1);
    scanf("%d", &ballOne[j+10]);
    checkIt(ballOne[j+10], j+10, 3);
  }
}
void checkStrike(int i)
{
  if(ballOne[i] == 10)
  {
    printf("\t\t\t\tCongratulations, it's a strike!");
    doNext = 0;
  }
}
void classify(int i)
{
  if((ballOne[i] + ballTwo[i]) == 10)
    printf("\t\t\t\tNot bad, it's a spare!");
  if((ballOne[i] + ballTwo[i]) < 10)
    printf("\t\t\t\tYou need to try harder...");
  return;
}
void getScore()
{
  int i;
  
  for(i = 0; i < 10 ; i++)   
  {
    doNext = 1;
    printf("\n\tFrame - %d", i + 1); 
    printf("\n\t\tBall - 1 : ");
    scanf("%d", &ballOne[i]); 
    checkIt(ballOne[i], i, 1); 
    checkStrike(i);
    if(doNext == 1)
    {
      printf("\n\t\tBall - 2 : ");
      scanf("%d", &ballTwo[i]);  
      checkIt(ballTwo[i], i, 2);
      classify(i);
    }
  }
  if(ballOne[9] == 10)
    extra(2);
  if(ballOne[9] + ballTwo[9] == 10 && ballOne[9] != 10)
    extra(1);
}
void calc()
{
  int i, total = 0;
  
  for(i = 0; i < 10; i++)
  {
    if(ballOne[i] == 10 && ballOne[i+1] != 10)             //Strike followed by no strike.
      score[i] = ballOne[i] + (ballOne[i+1]+ballTwo[i+1]);
    if(ballOne[i] == 10 && ballOne[i+1] == 10)             //Strike followed by a strike.
      score[i] = ballOne[i] + ballOne[i+1] + ballOne[i+2];
    if((ballOne[i] + ballTwo[i]) == 10 && ballOne[i] != 10)                    //Spare.
      score[i] = 10 + ballOne[i+1];
    if((ballOne[i] + ballTwo[i]) < 10)
      score[i] = ballOne[i] + ballTwo[i];
    total = total + score[i];
    score[i] = total;
  }        
}
void printIt(int i)
{
  int j;
  
  if(i == 1)
  {
    printf("\n\tBall - 1 : ");
    for(j = 0; j < 12; j++)
    {
      if(j < 11)
        printf("%3d ", ballOne[j]);
      if(j > 10)
        printf("%5d ", ballOne[j]);
    }
  }
  if(i == 2)
  {
    printf("\n\tBall - 2 : ");
    for(j = 0; j < 10; j++)
    printf("%3d ", ballTwo[j]);
  }
  if(i == 3)
  {
    printf("\n\t  Score  : "); 
    for(j = 0; j < 10; j++)
      printf("%3d ", score[j]);
  }
}
void dump()
{
  int i;

  for(i = 0; i < 12; i++)
  {
    score[i]   = 0;
    ballOne[i] = 0;
    ballTwo[i] = 0;
    doNext     = 1;
  }
}
int main()
{
  char more = 'y';
  
  do{
  dump();
  system("cls");
  printf("\n\t\tWelcome to Blinn Bowling Center");
  getScore();
  calc();
  printf("\n\n\t  Frame -    1   2   3   4   5   6   7   8   9  10  Xtr-1 Xtr-2");
  printIt(1);
  printIt(2);
  printIt(3);
  printf("\n\n\t\t\tDo more? (Y/N): ");
  scanf("%s", &more);
  }while(more == 'y' || more == 'Y');
  getch();
}
