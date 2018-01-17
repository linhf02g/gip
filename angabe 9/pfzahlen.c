#include <stdio.h>
#include <math.h>
#include <time.h>
int isPerfect();
int isPerfect()
{
    int i, j, end1, sum,begin1;
    end1 = 500;
    begin1 = 1;
    printf("All Perfect numbers between %d to %d:\n",begin1,end1);
    /* Iterate from 1 to end */
    for(i=begin1; i<=end1; i++)
    {
        sum = 0;
        /* Check whether the current number i is Perfect number or not */
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
        /* If the current number i is Perfect number */
        if(sum == i)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}
double eval_time ()
{
    time_t begin, end;
    begin = time(NULL);
    isPerfect();
    end = time (NULL);
    return difftime (end, begin);
}
int main()
{
    printf("Zeit : %3.0f sec\n", eval_time(isPerfect));
    return 0;
}