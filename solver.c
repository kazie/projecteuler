#include <stdio.h> /* IO stuff */
#include <stdint.h> /* Integers */
//#include <math.h> /* sqrt and stuff */
//#define int int64_t

void read(int * x);
void output(int problem, int answer);
void solve(int * answer); // main solve clauses

int main()
{
  int x;

  //read(&x);
  //x = isPalindrome(x);
  solve(&x);
  output(4,x);
  return 0;
}

void solve(int * answer)
{
  int i=999, j=999, largestPalin=0;
  
  for(i=999;i>100;i--){
    for(j=999;j>100;j--)
      {
        int mul = j*i;
        if(1==isPalindrome(mul) && mul>largestPalin){
          largestPalin = mul;
        }
      }
  }
  
  *answer = largestPalin;
  
}

// 1 = TRUE, 0 = FALSE.
int isPalindrome(int x){
 int n = x;
 int rev = 0;
 while (x > 0)
 {
      int dig = x % 10;
      rev = rev * 10 + dig;
      x = x / 10;
 }

 if(n == rev){
   return 1;
 } else{
   return 0;
 }
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
