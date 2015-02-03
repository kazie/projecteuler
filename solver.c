#include <stdio.h> /* IO stuff */
#include <stdint.h> /* Integers */
#include <math.h> /* sqrt and stuff */
//#define int int64_t
#define TRUE 1
#define FALSE 0

void read(int * x);
void output(int problem, long answer);
void solve(long * answer); // main solve clauses

int main()
{
  long x = 0;

  //read(&x);
  //x = isPalindrome(x);
  solve(&x);
  output(7,x);
  return 0;
}

void solve(long * answer)
{
  long i,j=0;
  for(i=2; i>-1; i++){
    if(isPrime(i)){
      j++;
      //printf("found prime %ld at %ld\n", j,i );
      if(j==10001){
        *answer = i;
        break;
      }
    } else{
      //printf("this is not a prime %ld\n", i );
    }
    
  }
}

int isPrime(long checkMe){
  long i = 0;
  for(i=2; i<=sqrt(checkMe); i++){
    if(0 == checkMe%i){
      return FALSE;
    }
  }
  return TRUE;
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
