#include <stdio.h>

int main()
	{
	int n, f, i;
	printf("Geben Sie eine positive ganze Zahl ein: ");
	scanf("%d", &n);
	printf("Die Fakultaet von %d ist: ", n);
	f = 1;
	for(i=1;i<=n;i=i+1)
	{
		f = f * i;
	}
	printf("%d\n", f);
return 0;

}