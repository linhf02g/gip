#include <stdio.h>
int lon;
unsigned readIntArray (int a[], int l);
void printIntArray (int a[], int l);
int main (void)
{
	printf("n: \n");
	scanf("%hhu",&lon);
    int a[lon];
    readIntArray(a, lon);
    printIntArray(a, lon);
    return 0;
}
unsigned readIntArray(int alpha[], int l)
{
    int i;
    int num;
    l=10;
    for (i = 0; i < l;i++)
    {
        printf("Eingabe Komponente mit Index %d von i: ", i);
        scanf("%d",&num);
        alpha[i]=num;
    }
}
void printIntArray(int alpha[], int l)
{
    int lv;
    int c;
    l=10;
    for (lv =0; lv<l; lv++)
    {
        printf("\ni [%d] hat den Wert: %d\t", lv, alpha[lv]);
        for (c=0;c<alpha[lv]; c++){
        	printf("*");
        }

    }
}