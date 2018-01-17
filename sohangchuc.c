#include<stdio.h>

int main()
{
    int n;
    printf("\nnhap so co 4 chu so:");
    scanf("%d",&n);
    if(1000<=n&&n<=9999)
        {
            //printf("\nchu so hang don vi la:%d",n%10);
            n/=10;
            printf("\n chu so hang chuc la:%d",n%10);
            //n/=10;
            //printf("\n chu so hang tran la:%d",n%10);
            //n/=10;
            //printf("\n chu so hang nghin la:%d",n%10);
        }
    else printf("\nso ban nhap ko hop le");    

}  