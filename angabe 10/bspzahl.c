#include <stdio.h>
int linearSearch(int n int a[], int l);
int linearSearch(int n,int a[], int l) {
	int b;
	int num;
	printf("die Laenge der Reihung: ");
	scanf("%d",&,l);
	printf("Geben sie die Reihung ein: ")
	for(int c = 0,c<l,c++)
	{
		scanf("%d",&num);
		a[c] = num;
	}
	for (b=0;b<l;b++)
		if (a[b]== n)
			return b;
	return -1;
}
int main(void) 
{

    int number, i, factor;
    i = 2;
    printf("Geben Sie eine Zahl: ");
    scanf(" %i", &number); 
    if (number>=2)
    {
        while(number != 1) 
        { 
            if(number % i != 0)
            i++; 
            else if(number % i == 0)
            {
                factor = i;
                if(factor<100){
					printf("%i.", factor);
                	number = number / i;
                }
                else
                	continue;
            }
        }
    }
    else
    {
        printf("die Zahl muss >=2\n");
        return main();
    }
return 0;
}