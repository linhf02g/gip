#include <stdio.h> 
#include <stdlib.h> 
  
long dez2bin_rek (int n, long b, long f) 
{ 
    if (n != 0) 
    { 
        long r = n % 2; 
        b = b + r * f; 
        f = f * 10; 
        b = dez2bin_rek(n/2, b, f); 
    } 
    return b; 
} 
  
void iterative(int n) 
{ 
    char bin[36]; 
    int i; 
    for (i=1; i < 5; i++) 
    { 
            long bb; 
            n++; 
            bb = dez2bin_rek(n,0,1); 
            printf("n=%d\tbb=%4ld\titoa=%s\n", n, bb, itoa(n,bin,2)); 
    } 
} 
  
int main() 
{ 
    int n = 0; 
    iterative(n); 
    getchar(); 
    return 0; 
}