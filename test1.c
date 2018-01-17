#include <stdio.h>
#include <math.h>
int convertDecimalToBinary(int n);
int convertBinaryToDecimal(int m);

int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("%d in decimal = %d in binary\n", n, convertDecimalToBinary(n));
    long long m;
    printf("Enter a binary number: ");
    scanf("%lld", &m);
    printf("%lld in binary = %d in decimal\n", m, convertBinaryToDecimal(m));
    return 0;
}

int convertDecimalToBinary(int n)
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

int convertBinaryToDecimal(int m)
{
    int decimalNumber = 0, i = 0, remainder;
    while (m!=0)
    {
        remainder = m%10;
        m /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}