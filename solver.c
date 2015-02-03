#include <stdio.h> /* IO stuff */

void read(int * x);
void output(int problem, int answer);
void solve(int * answer); // main solve clauses

int main()
{
  int x;

  //read(&x);
  solve(&x);
  output(1,x);
  return 0;
}

void solve(int * answer)
{
  int multiples [1000];

  
  int i,j;
  for(i=0,j=0; i<1000; i++){
    multiples[i] = 0; // zero init array
    if(0 == i%3 | 0 == i%5){
      multiples[j] = i;
      j++;
    }
  }

  int sum;
  for(i=0, sum=0; i<1000; i++){
    sum+=multiples[i];
  }
  *answer = sum; // write answer
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
  printf( "The solution for problem %d is %d\n" , problem, answer );
}
