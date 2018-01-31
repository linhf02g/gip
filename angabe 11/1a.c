#include<stdio.h>
int f(int);
int main()
{
   int n, i = 0, c;
 
   scanf("%d",&n);
 
   printf("Fibonacci series:\n");
   printf("Fibonacci: %d\n",f(n));
 
   for ( c = 0 ; c <= n ; c++ )
   {
      printf("%d\n", f(i));
      i++; 
   }
   return 0;
}
int f(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( f(n-1) + f(n-2) );
} 