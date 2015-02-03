#include <stdio.h> /* IO stuff */

void read(int * x);
void output(int problem, int answer);


int main()
{
  int x;

  read(&x);
  
  output(0,x);
  return 0;
}

/* in case I want a program to take input */
void read(int * x)
{
  printf( "Write input (number) here: " );
  scanf( "%d", x );
}

/* Template output for answers */
void output(int problem, int answer)
{
  printf( "The solution for problem %d is %d\n" , problem, answer );
}
