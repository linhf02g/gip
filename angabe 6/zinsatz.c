#include <stdio.h>

int main()
{
    double  verzinkapital;
    float geld;
    float zinssatz;
    int jahre;
    int n;

    printf("Geben Sie Ihren Startkapital ein: ") ;
    scanf("%f", &geld);
    printf("Geben Sie den Zinssatz ein: ") ;
    scanf("%f", &zinssatz);
    printf("Wie lange moechten sie sparen ? (Angabe in n Jahren):") ;
    scanf("%i", &n);
    printf("\n") ;
    for(jahre = 1; jahre <= n; jahre++)
    {
        geld = geld + (geld * (zinssatz/100));
        verzinkapital = (double) geld;
        printf("%s %i %s %.2f\n", "Nach", jahre, "Jahren haben Sie", verzinkapital);
    }
    return 0;
}