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
<<<<<<< HEAD
  output(48,x);
=======
  output(28,x);
>>>>>>> 41f9260897c4c18680d851f45a6ab6f70984738f
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
<<<<<<< HEAD

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
=======

  unsigned long sum=0;
  int num = 1001;
  int size = num*num;
  
  char vector[size];

  // 0 vector;
  int i;
  for(i=0; i<size; i++)
    vector[i] = 0;

  // Populate vector
  
  vector[0] = 1; // Init 1

  int j=2;
  i=0;
  while(i<size-1){          // -1 since 0;
    vector[i+j] = 1;        // l2: 8+4 =12, l3: 24+6= 30,
    vector[i+j*2] = 1;      // l2: 8+8 =16, l3: 24+12=36
    vector[i+j*3] = 1;      // l2: 8+12=20, l3: 24+18=..
    vector[i+j*4] = 1;      // l2: 8+16=24, l3: 24+24=.. OK
    i=i+j*4; // l1: 0+2*4 = 8, l2: 8+16=24, 
    j=j+2;   // l1: 2+2=4,     l2: 4+2 = 6, 
  }
  
  // Sum vector
  for(i=0; i<size; i++){
    if(vector[i]){
      //printf("found %d\n", i+1);
      sum += i+1;
    }
  }
          
  *answer = sum;
>>>>>>> 41f9260897c4c18680d851f45a6ab6f70984738f
  
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
