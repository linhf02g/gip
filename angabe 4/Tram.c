#include <stdio.h>

int main()

{
	int start,end,price,linestart,lineend,haltestellestart,haltestelleend;
	int nhaltestelle = 0;
	int kurzstrecke = 2;
	int pauschale = 3;
	int zonenwechsel = 1;
	int endhaltestelle = 1;


	printf("Starthaltestelle: ");
	scanf("%d", &start);
	printf("Endhaltestelle: ");
	scanf("%d", &end);
	//tinh so tram ve trung tam
		linestart = (start/10);
	//printf("\nlinestart: %d",linestart%10);
		lineend = (end/10);
	//printf("\nlineend: %d",lineend%10);
		haltestellestart = start%10;
	//printf("\nhaltestellestart: %d",haltestellestart);
		haltestelleend = end%10;
	//printf("\nhaltestelleend: %d",haltestelleend);
		if (linestart == lineend && ((haltestellestart - haltestelleend == 1) ||linestart == lineend && (haltestelleend - haltestellestart == 1)))
			{price = kurzstrecke;}
		else if ((linestart == 0 || lineend == 0) && (haltestelleend==1 ||haltestellestart==1))
			{price=kurzstrecke;}
		else if (linestart != lineend && haltestelleend == 2 && haltestellestart == 2)
			{price = kurzstrecke;}
		else if ((linestart == 42 && lineend==52) || (linestart==52 && lineend==42))
			{price = pauschale;}
		else if ((linestart == 21 && lineend==00) || (linestart==00 && lineend==21))
			{price = pauschale;}
		else
			{price = pauschale;}
			if ((haltestellestart <= 2 && haltestelleend > 2) || (haltestelleend <= 2 && haltestellestart > 2))
				{price = price + zonenwechsel;}
			else if (haltestelleend == 5 || haltestellestart == 5)
				{price = price + endhaltestelle;}
			if (((haltestellestart <= 2 && haltestelleend > 2) || (haltestelleend <= 2 && haltestellestart > 2)) && (haltestelleend == 5 || haltestellestart == 5))
				{price = pauschale + endhaltestelle + zonenwechsel;}
	printf("price: %d",price);


	return 0;
}