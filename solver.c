#include <stdio.h> /* IO stuff */
#include <stdint.h> /* Integers */
//#include <math.h> /* sqrt and stuff */
#include <string.h>
#include <gmp.h>

#define TRUE 1
#define FALSE 0

void read(int * x);
void output(int problem, long answer);
void solve(long * answer); // main solve clauses


int ctoi(char c)
{
  if ((c >= '0') && (c <= '9'))
    return c - '0';
  
  return -1;
}

int isPrime(long n){
  if (n <= 1) return FALSE;
  unsigned long i;
  for (i=2; i*i<=n; i++) {
    if (n % i == 0) return FALSE;
  }
  return TRUE;
}

int max(int a, int b){
  if(a>b){
    return a;
  } return b;
}

int main()
{
  long x = 0;

  solve(&x);
  output(18,x);
  return 0;
}


void solve(long * answer)
{

  mpz_t x;
  mpz_init(x);
  mpz_fac_ui(x, 100UL);
  char* buffer;
  buffer = mpz_get_str(NULL, /*base*/10, x);

  int i, sum=0;
  for(i=0; i<strlen(buffer);i++){
    sum += ctoi(buffer[i]);
  }
  
  *answer = sum;

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
