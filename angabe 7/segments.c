//segments
#include <stdio.h>
int nums1,nums2,num,a,zahl,c,e;
int n=0;
int line1s1();
int line2s1();
int line3s1();
int line4s1();
int line5s1();
int line1s1()
{
    int numa[e];
        if (a<2)
        {
            if (num == 1||num==4)
                printf("    \n");
            else
                printf(" ___\n");
        }
        else
        {
            if (num == 1||num==4)
                printf("    \t");
            else
                printf(" ___\t");
            a=a-1;
        }
}

int line2s1()
{
    int numa[e];
        if (a<2)
        {
            if (num==1||num==2||num==3||num==7)
                printf("    |\n");
            else if (num==5||num==6)
                printf("|    \n");
            else
                printf("|   |\n");
        }
        else
        {
            if (num==1||num==2||num==3||num==7)
                printf("    |\t");
            else if (num==5||num==6)
                printf("|    \t");
            else
                printf("|   |\t");
            a=a-1;  
        }

}

int line3s1()
{
    int numa[e];
        if (a<2)
        {
            if (num==2||num==3)
                printf(" ___|\n");
            else if (num==1||num==7)
                printf("    |\n");
            else if (num==0)
                printf("|   |\n");
            else if (num==5||num==6)
                printf("|___ \n");
            else
                printf("|___|\n");
        }
        else
        {
            if (num==2||num==3)
                printf(" ___|\t");
            else if (num==1||num==7)
                printf("    |\t");
            else if (num==0)
                printf("|   |\t");
            else if (num==5||num==6)
                printf("|___ \t");
            else
                printf("|___|\t");
            a=a-1;
        }
}

int line4s1()
{
    int numa[e];
        if (a<2)
        {
            if (num==2)
                printf("|    \n");
            else if (num==6||num==8||num==0)
                printf("|   |\n");
            else
                printf("    |\n");
        }
        else
        {
            if (num==2)
                printf("|    \t");
            else if (num==6||num==8||num==0)
                printf("|   |\t");
            else
                printf("    |\t");
            a=a-1;
        }
}

int line5s1()
{
    int numa[e];
        if (a<2)
        {
            if (num==1||num==4||num==7)
                printf("    |\n");
            else if (num==3||num==5||num==9)
                printf(" ___|\n");
            else if (num==2)
                printf("|___\n");
            else
                printf("|___|\n");
            return 0;
        }
        else
        {
            if (num==1||num==4||num==7)
                printf("    |\t");
            else if (num==3||num==5||num==9)
                printf(" ___|\t");
            else if (num==2)
                printf("|___\t");
            else
                printf("|___|\t");
            a=a-1;
        }
    }
int main(int argc, char const *argv[])
{
	int b,d;
        printf("Geben sie eine Zahl:\n");
        scanf("%d",&zahl);
        b = zahl;
        c = b;
        while(zahl!=0)
        {
            zahl=zahl/10;
            n++;
        }
        a=n;
    int i, s = 0;
    int numa[n];
    for (i = 0; i < n ; i++) 
    {
    	d=c%10;
    	numa[i]= d;
    	c = c/10;
    }
    for (i = 0; i < n; i++) {
        e = n - i -1;
        num = numa[e];
        line1s1(num,n);
    }
    a=n;
    for (i = 0; i < n; i++) {
        e = n - i -1;
        num = numa[e];
        line2s1(num,n);
    }
    a=n;
    for (i = 0; i < n; i++) 
    {
        e = n - i -1;
        num = numa[e];
        line3s1(num,n);
    }
    a=n;
    for (i = 0; i < n; i++) 
    {
        e = n - i -1;
        num = numa[e];
        line4s1(num,n);
    }
    a=n;
    for (i = 0; i < n; i++) 
    {
        e = n - i -1;
        num = numa[e];
        line5s1(num,n);
    }
    return 0;
}