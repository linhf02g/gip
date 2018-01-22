#include <stdio.h>
void readIntArray ();
int main (void)
{
    readIntArray();
    return 0;
}
void readIntArray()
{
    int i;
    int num;
    int l;
    printf("l: ");
    scanf("%d",&l);
    unsigned char alpha[l];
    for (i = 0; i < l;i++)
    {
        printf("Eingabe Komponente mit Index %d von i: ", i);
        scanf("%hhu",&num);
        alpha[i]=num;
    }
    int lv;
    int c;
    for (lv =0; lv<l; lv++)
    {
        printf("\n%d : %hhu\t|", lv, alpha[lv]);
        for (c=0;c<alpha[lv]; c++){
            printf("*");
        }

    }
}
