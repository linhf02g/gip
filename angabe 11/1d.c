#include<stdio.h>
long long a,zahl,c,e;
int n=0;
int test(int arr[],int l,int g);
int test(int arr[],int l,int g){
    if(l+1<g)
    {
        if (arr[l]>=arr[l+1]){
            return test(arr,l+1,g);
        }
        if (arr[l]<arr[l+1]){
            printf("0\n");
            return 0;
        }
    }
    else if (l+1>=g){
        printf("1\n");
        return 1;
    }
}
int main(int argc, char const *argv[])
{
    long long b,d;
        printf("Geben sie eine Zahl:\n");
        scanf("%lld",&zahl);
        b = zahl;
        c = b;
        while(zahl!=0)
        {
            zahl=zahl/10;
            n++;
        }
        a=n;
    int i;
    int numa[n];
    for (i = n - 1; i >=0 ; i--) 
    {
        d=c%10;
        numa[i]= d;
        c = c/10;
    }
    test(numa,0,a);
    return 0;
}
