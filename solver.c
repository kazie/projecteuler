#include <stdio.h> /* IO stuff */
#include <stdint.h> /* Integers */
#include <math.h> /* sqrt and stuff */
#include <string.h>

#define TRUE 1
#define FALSE 0

void read(int * x);
void output(int problem, long answer);
void solve(long * answer); // main solve clauses

int main()
{
  long x = 0;

  solve(&x);
  output(9,x);
  return 0;
}

void solve(long * answer)
{
  // a<b<c, a+b+c=1000 a^2+b^2=c^2

  long a,b,c;
  for(a=1,b=1,c=1;c<1000;c++){
    for(a=1,b=1;b<1000;b++){
      for(a=1;a<1000;a++){
        if(a*a+b*b == c*c && a+b+c==1000){
          printf("Found a:%lu b:%lu c:%lu\n", a, b, c);
          *answer = a*b*c;
        }
      }
    }
  }
  // *answer = 0;
}

/* in case I want a program to take input */
void read(int * x)
{
  printf( "Write input (number) here: " );
  scanf( "%d", x );
}

/* Template output for answers */
void output(int problem, long answer)
{
  printf( "The solution for problem %d is %lu \n" , problem, answer );
}
