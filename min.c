//min max
#include <stdio.h>
int main()
{
    int dreizahlen[3];
    int i, max, min;

    printf("Geben Sie drei ganze Zahlen: ");
    for(i=0; i< 3; i++)
    {
        scanf("%d", &dreizahlen[i]);
    }
    max = dreizahlen[0];
    min = dreizahlen[0];

    for(i=1; i<3; i++)
    {
        if(dreizahlen[i]>max)
        {
            max = dreizahlen[i];
        }
        if(dreizahlen[i]<min)
        {
            min = dreizahlen[i];
        }
    }
    printf("Maximum Zahl = %d\n", max);
    printf("Minimum Zahl = %d", min);

    return 0;
}
