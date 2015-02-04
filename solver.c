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
  int dim = 15;
 
  int tree[15][15] = {{75,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                  {95,64,0,0,0,0,0,0,0,0,0,0,0,0,0},
                  {17,47,82,0,0,0,0,0,0,0,0,0,0,0,0},
                  {18,35,87,10,0,0,0,0,0,0,0,0,0,0,0},
                  {20,4,82,47,65,0,0,0,0,0,0,0,0,0,0},
                  {19,1,23,75,3,34,0,0,0,0,0,0,0,0,0},
                  {88,2,77,73,7,63,67,0,0,0,0,0,0,0,0},
                  {99,65,4,28,6,16,70,92,0,0,0,0,0,0,0},
                  {41,41,26,56,83,40,80,70,33,0,0,0,0,0,0},
                  {41,48,72,33,47,32,37,16,94,29,0,0,0,0,0},
                  {53,71,44,65,25,43,91,52,97,51,14,0,0,0,0},
                  {70,11,33,28,77,73,17,78,39,68,17,57,0,0,0},
                  {91,71,52,38,17,14,91,43,58,50,27,29,48,0,0},
                  {63,66,4,68,89,53,67,30,73,16,69,87,40,31,0},
                  {4,62,98,27,23,9,70,98,73,93,38,53,60,4,23}};
  
  
  
  /** OPTIMIZE TREE BUTTOM UP **/
  int i,j;
  for(i=dim-1;i>0;i--){
    for(j=0;j<i;j++){
      tree[i-1][j] += max(tree[i][j],tree[i][j+1]);
        }
  }
  /** ANSWER SHOULD BE IN 0,0 NOW **/
  int tmp = tree[0][0];
  
  *answer = tmp;

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
