#include <stdio.h>
double quadrat(double x) { return x*x; }
double cubic(double x) { return x*x*x; }
void Wertetabelle(double(fte(double)), double star, double end, double schrittweite)
{
    for (double count = star; count <= end; count += schrittweite)
    printf("Wert fuer f(%.2f)=%f\n", count, fte(count));
}

int main()
{
    Wertetabelle(quadrat, 0.0, 10.0, 1.0);

}