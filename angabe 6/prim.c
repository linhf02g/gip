//Aufgabe 2
#include <stdio.h>

int main(void) 
{

    int number, i, factor;
    i = 2;

    printf("Geben Sie eine Zahl: ");
    scanf(" %i", &number); 
    if (number>=2)
    {
        while(number != 1) 
        { 
            if(number % i != 0)
            i++; 
            else if(number % i == 0)
            {
                factor = i;
                printf("%i.", factor);
                number = number / i;
            }
        }
    }
    else
    {
        printf("die Zahl muss >=2\n");
        return main();
    }
return 0;
}