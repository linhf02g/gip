#include <stdio.h>
double quadrat(double x) { return x*x; }
double cubic(double x) { return x*x*x; }
void Wertetabelle(double(fte(double)),double arl,double s1, double s2,double s3, double s4)
{
        printf("Wert fuer f(%.2f)= %f\n",s1,fte(s1));
        printf("Wert fuer f(%.2f)= %f\n",s2,fte(s2));
        printf("Wert fuer f(%.2f)= %f\n",s3,fte(s3));
        printf("Wert fuer f(%.2f)= %f\n",s4,fte(s4));
}
int main()
{
    Wertetabelle(cubic,4, 3.0,7.0,11.0, 41.0);

}