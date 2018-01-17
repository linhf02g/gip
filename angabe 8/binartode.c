#include <stdio.h>
#include <math.h>
int decimalToBinary(int n);
int binaryToDecimal(int m);

int main()
{
    int n;
    int a;
    printf("1. decimal zu binary\n2. binary zu decimal\n");
    scanf("%d",&a);
    if (a==1) {
        printf("Geben Sie eine decimal Nummer ein: ");
        scanf("%d", &n);
        printf("in binary = %d \n", decimalToBinary(n));
    }
    else if(a==2){
        printf("Geben Sie eine binary Nummer ein: ");
        scanf("%lld", &n);
        printf("in decimal = %d \n", binaryToDecimal(n));
    }
    else
        return 0;
}

int decimalToBinary(int n)
{
    int binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}

int binaryToDecimal(int n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}