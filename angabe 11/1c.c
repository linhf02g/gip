#include<stdio.h>
int f(int);
int main()
{
   int n;
   printf("n: ");
   scanf("%d",&n);
   printf("quadrat: %d\n",f(n));
   return 0;
}
 
int f(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( f(n-1) + n + n -1 );
} 