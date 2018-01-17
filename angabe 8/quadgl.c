#include <stdio.h>
#include <math.h>
double a, b, c;
double x1, x2, x;
double solve();
double solve() {
	int delta;
	delta =(b*b) - 4*a*c;
	if (delta<0)
	{
		return 0;
	}
	else if(delta == 0){
		x = (-b)/(2*a);
		return 1;
	}
	else if(delta >0){
		x1 = (-b + sqrt(delta))/(2*a);
		x2 = (-b - sqrt(delta))/(2*a);
		return 2;
	}
}

int main(int argc, char const *argv[])
{

	printf("Geben Sie a,b,c ein.(a.x^2 + b + c =0)");
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	int anzahl = solve(a, b, c, x1, x2);
	if (!anzahl) {
		printf("keine Loesung");
	}
	else if (anzahl == 1) {
		
		printf("eine Loesung x: %lf", x);
	}
	else if (anzahl > 1) {

		printf("zwei Loesungen x1: %lf x2: %lf", x1, x2);
	}	
	return 0;
}
