#include<stdio.h>
#include<stdlib.h>
int c=0;
int binarysearch(int *,int,int);
int binarysearch(int *a,int m,int n)
{
 
    int l,u,mid;
l=0,u=n-1;
    while(l<=u)
        {
         mid=(l+u)/2;
         if(m==a[mid])
            {
             c=1;
             return mid;
         }
         else if(m<a[mid])
            {
             u=mid-1;
         }
         else
             l=mid+1;
    }
    return -1;
}
int main()
{
 
    int *a,i,n,m,pos;
 
    printf("Geben Sie die Laenge der Reihung ein: ");
    scanf("%d",&n);
        a=(int*)malloc(n*sizeof(int));
 
    printf("Geben Sie die Zahlen in der Reihung: ");
    for(i=0;i<n;i++)
        {
         scanf("%d",(a+i));
    }
 
    printf("Nummer, um zu suchen: ");
    scanf("%d",&m);
        pos=binarysearch(a,m,n);
 
     
    if(c==0)
         printf("Es gibt keine Zahl, die die Bedingung efuellt\n");
    else
         printf("Die Zahl ist an der Position %d\n",pos);
 
    return 0;
}