#include <stdio.h>
#include <stdlib.h>//required to use 'rand()'
#include <time.h>//required to use 'srand(time(NULL))'
int mun = 20;
int person();
int com();
int anfg();
int endg();
int anfg()
{
    int jan;
    printf("Willst du beginnen (0 fuer Nein oder 1 fuer Ja): ");
    scanf ("%d", &jan);
        if (jan==0)
        {
            return 0;
        }
        else if (jan==1)
        {
            return person();
        }
}

int endg()
{
    int jan;
    printf("Willst du noch einmal spielen (0 fuer Nein oder 1 fuer Ja): ");
    scanf ("%d", &jan);
        if (jan==0)
        {
            return 0;
        }
        else if (jan==1)
        {
           return person(mun=20);
        }
}
int person()
{
    int pnim;
    printf("Es sind %d Muenzen auf dem Stapel\nWieviel Muenzen nimmst du: ", mun);
            scanf ("%d", &pnim);
    if (pnim>mun)
    {
        printf("Du muss nicht mehr als %d Muenzen nehmen\n", mun);
        return person(mun);
    }
    else if(pnim>3)
    {
        printf("Du muss nicht mehr als 3 Muenzen nehmen\n");
        return person(mun);
    }
    else
    {
        printf("Du nimmst %d.\n", pnim);
        mun = mun - pnim;
        if (mun==0)
        {
            printf("Es ist keine Muenzen auf dem Stapel.\nIch habe gewonnen!\n");
            return endg();
        }
        else
        {
            printf("Es sind %d Muenzen auf dem Stapel\n", mun);
            return com(mun);
        }
    }
}
//con nihmt random
int crnim ();
int crnim()
{
srand(time(NULL));//required for "randomness"

 int r;
 r=rand()%3 + 1;//generate a number between 1 and 3
}

int com()
{
    int cnim;
    if(mun==1)
    {
        printf("Ich nehme 1.\nEs ist keine Muenzen auf dem Stapel.\nIch habe verloren!\n");
        return endg();
    }
    else if(mun==2)
    {
        printf("ich nehme 1.\n");
        mun = mun - 1;
        return person(mun);
    }
    else if(mun%4==2)
    {
        cnim = 1;
        mun = mun - 1;
        printf("Ich nehme %d\n", cnim);
        return person(mun);
    }
    else if(mun%4==3)
    {
        cnim = 2;
        mun = mun - 2;
        printf("Ich nehme %d\n", cnim);
        return person(mun);
    }
    else if(mun%4==0)
    {
        cnim = 3;
        mun = mun - 3;
        printf("Ich nehme %d\n", cnim);
        return person(mun);
    }
    else if(mun%4==1)
    {
        printf("ich nehme %d\n", crnim());
        mun = mun - crnim();
        return person(mun);

    }

}

int main(int argc, char const *argv[])
{
    anfg();               
    return 0;
}