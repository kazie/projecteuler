#include <stdio.h> /* IO stuff */
#include <stdint.h> /* Integers */
#include <math.h> /* sqrt and stuff */
//#define int int64_t

void read(int * x);
void output(int problem, long answer);
void solve(long * answer); // main solve clauses

int main()
{
  long x = 0;

  //read(&x);
  //x = isPalindrome(x);
  solve(&x);
  output(6,x);
  return 0;
}

void solve(long * answer)
{
  long i;
  long sumH = 0;
  long sumPow;
  for (i=0; i<=100; i++){
    sumH+=i; // sum 100
  }
  sumH = sumH*sumH;

  //printf( "SumH: %ld\n", sumH);
  
  for (i=0; i<=100; i++){
    sumPow+=i*i; // sum 100
    if (sumPow < 0){
      printf( "OVERFLOW\n" );
    }
  }
  //printf("sumPOW: %ld\n", sumPow );
  
  *answer = sumH - sumPow;
  
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
