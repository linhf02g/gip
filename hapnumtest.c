//Aufgabe 3
#include<stdio.h>
#include<conio.h>
int i;
int n = 500;

int check(int);
int main()
{
    int ret;
    for(i=1;i<=n;i++)
    {
        ret=check(i);
        if (ret==1)
        printf("%d ",i);
    }
    getch();
}
int check(int x)
{
    int sum=0,a;
    while(x!=0)
    {
        a=x%10;
        sum+=a*a;
        x/=10;
    }
    sum+=x*x;
    if (sum==1)
    return (1);
    else if (sum==4||sum==i)
    return (0);
    else
    return check(sum);
}