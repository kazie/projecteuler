#include <stdio.h> /* IO stuff */

void read(int * x);
void output(int problem, int answer);
void solve(int * answer); // main solve clauses

int main()
{
  int x;

  //read(&x);
  solve(&x);
  output(2,x);
  return 0;
}

void solve(int * answer)
{
  int multiples [1000];
  int a;
  for(a=0; a<1000; a++){
    multiples[a] = 0;
  }
  
  int i,j,vec;
  for(i=1,vec=0; i<4000000;){
    int prev = i;
    i = i+j;
    if(0 == i%2){
      if(vec >= 1000){
        printf( "Error, too big vector\n");
        return;
      }
      multiples[vec] = i;
      vec++;
    }
    j = prev;
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
