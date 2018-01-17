//Augabe 2
#include <stdio.h>
int main()
{
		int k, f;
		int n, b,a;

 		printf("n:");
 		scanf("%d", &n);
 		
		printf("k: ");
		scanf("%d", &k);
 			
 			a = 1;
 			b = 1;
 		for (int i = 0; i < k; ++i)
 		{
 			a *= n - i;
 			b *= k - i;
 		}
 		f = a/b;
 		printf("Binomialkoeffizient: %d", f);
 		return 0;
}