#include <stdio.h> /* IO stuff */
#include <stdint.h> /* Integers */
//#include <math.h> /* sqrt and stuff */
//#define int int64_t

void read(int * x);
void output(int problem, int answer);
void solve(int * answer); // main solve clauses

int main()
{
  int x = 0;

  //read(&x);
  //x = isPalindrome(x);
  solve(&x);
  output(5,x);
  return 0;
}

void solve(int * answer)
{
  int max=20, i=0;

  while( 1 ) {
    i=i+1;
    if(divisBy(i,max)){
      *answer = i;
      break;
    }
  }
}

int divisBy(int a, int max){
  int i=1;
  for(i; i<max; i++){
    if(0 != a%i){
      return 0;
    }
  }
  return 1;
}

/* in case I want a program to take input */
void read(int * x)
{
  printf( "Write input (number) here: " );
  scanf( "%d", x );
}

/* Template output for answers */
void output(int problem, int answer)
{
  printf( "The solution for problem %d is %d \n" , problem, answer );
}
