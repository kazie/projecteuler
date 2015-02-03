#include <stdio.h> /* IO stuff */
#include <stdint.h> /* Integers */
#include <math.h> /* sqrt and stuff */
//#define int int64_t

void read(int * x);
void output(int problem, int64_t answer);
void solve(int64_t * answer); // main solve clauses

int main()
{
  int64_t x;

  //read(&x);
  solve(&x);
  output(3,x);
  return 0;
}

void solve(int64_t * answer)
{
  int64_t n = 600851475143, i;

  //Case, devides by 2
  while(0 == n%2)
    {
      printf("%d, ", 2);
      n = n/2;
    }

  for (i = 3; i <= sqrt(n); i = i+2)
    {

      while(n%i == 0)
        {
          printf("%lu, ", i);
          n = n/i;
        }
      
    }

  // If last number is prime
  if(n > 2){
    printf("%lu\n", n);
  }
    
  
}

/* in case I want a program to take input */
void read(int * x)
{
  printf( "Write input (number) here: " );
  scanf( "%d", x );
}

/* Template output for answers */
void output(int problem, int64_t answer)
{
  printf( "The solution for problem %d is %lu \n" , problem, answer );
}
