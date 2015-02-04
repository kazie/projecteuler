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


int main()
{
  long x = 0;

  solve(&x);
  output(14,x);
  return 0;
}

// Length: Start with 1.
long getNext(long length, long number){
  while(number != 1){
    if(0 == number%2){
      //even
      length++;
      number= number/2;
    }else{
      //odd
      length++;
      number=3*number+1;
    }
  }
  return length; 
}

void solve(long * answer)
{
  long maxn=0, maxl=0,i;
  for(i = 1; i<=1000000; i++)
    {
      long tmp = getNext(1,i);
      //printf( "Tested:%lu Got:%lu\n", i,tmp);
      if(tmp>maxl){
        maxl = tmp;
        maxn = i;
      }
    }
  
  *answer = maxn;
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
