//min max
#include <stdio.h>
int main()
{
    int n=1000;
    float arr[n];
    int i,anzahl;
    float max1, min,max2;
    float s = 0;

    printf("Weitesprung: ");
    for(i=0; i< n; i++)
    {
        scanf("%f", &arr[i]);
        n=n+1;

        if (arr[i]<=0)
            break;
    }
    anzahl = i;
    printf("Anzahl der Spuenge %d\n", anzahl);
    max1 = max2 = arr[0];
    min = arr[0];

    for(i=0; i<anzahl; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
    for(i=1; i<anzahl; i++)
    {
        if(arr[i]<min && arr[i]>0)
        {
            min = arr[i];
        }
    }

    for(i=0;i<anzahl; i++)
    {
        s = s + arr[i];
    }
    printf("Die zwei groessten Weiten: %.2f,%.2f\n", max1,max2);
    printf("Die kleinste Weite: %f\n", min);
    printf("Die mittlere Weite: %.2f\n",s/anzahl);
    printf("Die Differenz von groesster und kleinster Weite: %.2f\n",max1-min);
    return 0;
}
