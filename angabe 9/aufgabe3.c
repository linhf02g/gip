#include <stdio.h>
# define lon 3
void readIntArray (int a[], int l);
void printIntArray (int a[], int l);
void minmaxmid(int a[], int l);
int main (void)
{
    int a[lon];
    readIntArray(a, lon);
    printIntArray(a, lon);
    minmaxmid(a,lon);
    return 0;
}
void readIntArray(int alpha[], int l)
{
    int i;
    int num;
    l=3;
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
    l=3;
    for (lv =0; lv<l; lv++)
    {
        printf("\ni [%d] hat den Wert: %d", lv, alpha[lv]);
    }
}
void minmaxmid(int alpha[], int l)
{
    int i,s=0;
    int max1, max2, min;
    max1 = max2 = alpha[0];
    min = alpha[0];
    l = 3;
    for(i=0; i<l; i++)
    {
        if(alpha[i] > max1)
        {
            max2 = max1;
            max1 = alpha[i];
        }
        else if(alpha[i] > max2 && alpha[i] < max1)
        {
            max2 = alpha[i];
        }
    }
    for(i=1; i<l; i++)
    {
        if(alpha[i]<min)
        {
            min = alpha[i];
        }
    }

    for(i=0;i<l; i++)
    {
        s = s + alpha[i];
    }
    printf("\n****************************\n");
    printf("Die groessten Weite: %d\n", max1);
    printf("Die kleinste Weite: %d\n", min);
    printf("Die mittlere Weite: %d\n",s/l);
}