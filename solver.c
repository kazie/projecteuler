#include <stdio.h> /* IO stuff */
#include <stdint.h> /* Integers */
//#include <math.h> /* sqrt and stuff */
#include <string.h>
#include <gmp.h>
#include <stdlib.h> /* Malloc */

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
  output(48,x);
  return 0;
}

/**
  Bignumb STUFF
  mpz_t x;
  mpz_init(x);
  mpz_fac_ui(x, 100UL);
  char* buffer;
  buffer = mpz_get_str(NULL, 10, x);
  mpz_pow_ui(tmp,i,i);
  mpz_init_set_si(base, i);
  atol = ascii to long
**/

void solve(long * answer){

  mpz_t sum;
  mpz_t tmp;

  mpz_init(sum);
  mpz_init(tmp);
  
  int max = 1000;
  int i;
  for(i=1;i<=max;i++){
    mpz_t base;
    mpz_init_set_si(base, i);
    mpz_pow_ui(tmp,base,i);
    mpz_add(sum, sum, tmp);
  }

  char* buffer;

  mpz_mod_ui(sum, sum, 10000000000);
  
  buffer = mpz_get_str(NULL, 10, sum);
  //printf("%s was the string\n", buffer);
  
  *answer = atol(buffer);
  
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
