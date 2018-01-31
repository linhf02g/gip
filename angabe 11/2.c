#include <stdio.h>
#include <string.h>
#include <math.h>
int detobi(int);
void binaryToDecimal(char *binary, int *decimal, int *len);
 
int main()
{
    int dec, bin;
    char binary[256];
    int decimal = 0, len;
    printf("Enter your binary input:");
    fgets(binary, 256, stdin);
    binary[strlen(binary) - 1]= '\0';
    len = strlen(binary);
    binaryToDecimal(binary, &decimal, &len);
    printf("Decimal Value: %d\n", decimal);
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    bin = detobi(dec);
    printf("The binary equivalent of %d is %d.\n", dec, bin);
 
    return 0;
}
 
int detobi(int dec)
{
    if (dec == 0)
    {
        return 0;
    }
    else
    {
        return (dec % 2 + 10 * detobi(dec / 2));
    }
}
void binaryToDecimal(char *binary, int *decimal, int *len) {
    static int num, i = 0;
    if (*len > 0) {
        *len = *len - 1;
        num = *(binary + *len) - '0';
        *decimal = *decimal + (num * pow(2, i++));
        binaryToDecimal(binary, decimal, len);
    }
    return;
}