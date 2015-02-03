#include <stdio.h> /* IO stuff */
#include <stdint.h> /* Integers */
#include <math.h> /* sqrt and stuff */
#include <string.h>

#define TRUE 1
#define FALSE 0

void read(int * x);
void output(int problem, long answer);
void solve(long * answer); // main solve clauses

int isPrime(long n){
  if (n <= 1) return FALSE;
  unsigned long i;
  for (i=2; i*i<=n; i++) {
    if (n % i == 0) return FALSE;
  }
  return TRUE;
}


int main()
{
  long x = 0;

  solve(&x);
  output(12,x);
  return 0;
}


//return number of divisors
int divisors(long number){
  int numb = 0;
  int i;
  double sqrter = sqrt(number);
  
  for(i = 1; i<= sqrter; i++){
    if(number % i == 0){
      numb += 2;
    }
  }

  // Correct perfect squares
  if (sqrter * sqrter == number) {
    numb--;
  }

  return numb;
  
}

long nextTriangular(long old, int numb){
  return old+numb;
}

void solve(long * answer)
{
  long prev = 0;
  int i;
  for(i=1; i>0; i++){
    prev = nextTriangular(prev, i);
    //printf("%d: %lu", i, prev);
    //printf(" divisors %d \n", divisors(prev));
    if(500<divisors(prev)){
      printf("%d: %lu", i, prev);
      printf(" divisors %d \n", divisors(prev));
      *answer = prev;
      break;
    }
  }
      
  
  // *answer = divisors();
}

/* in case I want a program to take input */
void read(int * x)
{
  printf( "Write input (number) here: " );
  //scanf( "%d", x );
}

/* Template output for answers */
void output(int problem, long answer)
{
  printf( "The solution for problem %d is %lu \n" , problem, answer );
}
