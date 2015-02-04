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
  output(21,x);
  return 0;
}

/**
  Bignumb STUFF
  mpz_t x;
  mpz_init(x);
  mpz_fac_ui(x, 100UL);
  char* buffer;
  buffer = mpz_get_str(NULL, 10, x);
**/

void solve(long * answer){
  
  int max=10000;
  char *dividers = malloc(max * max * sizeof(char));
  long *sumdividers = malloc(max * sizeof(long));
  long intsums=0;
  
  int i,j;
  
  for(i=0; i<max; i++){
    for(j=1; j<max; j++){
      if(i%j==0 && i!=j){
        dividers[i+j*max] = 1;
      } else{
        dividers[i+j*max] = 0;
      }
    }
  }
  
  
  for(i=0; i<max; i++){
    sumdividers[i]=0;
    for(j=1; j<max; j++){
      if(dividers[i+j*max]==1){
        sumdividers[i] += j;
      } 
    }
  }
  
  
  for(i=0; i<max; i++){
    if(sumdividers[i]<max){
      if(i == sumdividers[sumdividers[i]] && sumdividers[i] != sumdividers[sumdividers[i]]   ){ 
        //        printf("found %lu and %lu at i:%d\n", sumdividers[i],  sumdividers[sumdividers[i]], i);
        intsums += sumdividers[i];
        //intsums += sumdividers[sumdividers[i]];
      }
    }
  }
  
  *answer = intsums;
  
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
