#include <stdio.h> /* IO stuff */

void read();
void output(int problem, int answer);


int main()
{
  output(0,0);
  return 0;
}

/* in case I want a program to take input */
void read()
{
}

/* Template output for answers */
void output(int problem, int answer)
{
  printf( "The solution for problem %d is %d\n" , problem, answer );
}
