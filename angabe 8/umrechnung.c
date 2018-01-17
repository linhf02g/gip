//aufgabe 3
#include <stdio.h>
#include <conio.h>

int answer1,answer2,answer3,answer4,answer5,answer6;
float zollconvert();
float fussconvert();
float schrittconvert();
float meileconvert();
int question();
float zollconvert()
{
	int answer3;
	printf("*********************************************\n");
	printf("1. von Zoll zu internationalen Massen \n2. von internationalen Massen zu Zoll\n");
	printf("Geben Sie Ihre Wahl ein:\n");
	scanf("%d",&answer3);
	float inzoll;
	float umrezoll;
	if(answer3==1)
	{
		printf("Geben Sie Laengenmasse in Zoll ein:");
		scanf("%f",&inzoll);
		umrezoll = inzoll * 25.4;
		if (100<=umrezoll<=1000)
		{
			umrezoll = umrezoll/10;
			printf("Laengenmasse in internationalen Massen: %fcm\n", umrezoll);
			return question();
		}
		else if (umrezoll>1000)
		{
			umrezoll=umrezoll/1000;
			printf("Laengenmasse in internationalen Massen: %fm\n", umrezoll);
			return question();
		}

	}
	else if(answer3==2)
	{
		printf("Geben Sie Laengenmasse in cm ein\n");
		scanf("%f",&umrezoll);
		inzoll = umrezoll*0.3937;
		printf("Laengenmasse in Zoll: %fzoll\n", inzoll);
		return question();
	}
}
float fussconvert()
{	
	int answer4;
	float infuss,outfuss;
	printf("********************************************************\n");
	printf("1. Von Fuss zu internationalen Massen \n2. Von internationalen Massen zu Fuss\n");
	printf("Geben Sie Ihre Wahl ein:\n");
	scanf("%d",&answer4);
	if (answer4==1)
	{
		printf("Geben Sie Laengenmasse in Fuss ein:");
		scanf("%f",&infuss);
		outfuss = infuss*304.8;
		if (outfuss>1000)
		{
			outfuss=outfuss/1000;
			printf("Laengenmasse in internationalen Massen: %fm\n", outfuss);
			return question();
		}
		else
		{
			printf("Laengenmasse in internationalen Massen: %fmm\n", outfuss);
			return question();
		}
	}
	else if (answer4==2)
	{
		printf("Laengenmasse in cm:\n");
		scanf("%f", &outfuss);
		infuss = outfuss*0.0328;
		printf("Laengenmasse in Fuss: %fft\n", infuss);
		return question();
	}
}
float schrittconvert()
{
	int answer5;
	float inyard,outyard;
	printf("*********************************************\n");
	printf("1. von Schritt zu internationalen Massen \n2. von internationalen Massen zu Schritt\n");
	printf("Geben Sie Ihre Wahl ein:\n");
	scanf("%d",&answer5);
	if (answer5==1)
	{
		printf("Laengenmasse in Schritt:\n");
		scanf("%f",&inyard);
		outyard = (long long) inyard*914.4;
		if(1000<outyard<1000000)
		{
			outyard=outyard/1000;
			printf("Laengenmasse in internationalen Massen: %fm\n", outyard);
			return question();
		}
		else if (outyard>=1000000)
		{
			outyard=outyard/1000000;
			printf("Laengenmasse in internationalen Massen: %fkm\n", outyard);
			return question();
		}
		else
		{
			printf("Laengenmasse in internationalen Massen: %fmm\n", outyard);
		}
	}
	else if (answer5==2)
	{
		printf("Laengenmasse in m:\n");
		scanf("%d",&outyard);
		inyard=outyard*1.0936;
		printf("Laengenmasse in Schritt: %fyd\n", inyard);
		return question();
	}
}
float meileconvert()
{
	int answer6;
	float inmeile,inmeile1,inmeile2,outmeile1,outmeile2;
	printf("*********************************************\n");
	printf("1. von Meile zu internationalen Massen \n2. von internationalen Massen zu Meile\n");
	printf("Geben Sie Ihre Wahl ein:\n");
	scanf("%d",&answer6);

	if (answer6==1)
	{
		printf("Laengenmasse in Meile:\n");
		scanf("%f",&inmeile);
		outmeile1 = inmeile*1.60934;
		outmeile2 = inmeile*1.853;
		printf("Laengenmasse in internationalen Massen: %fkm(statute) & %fkm(nautical)\n",outmeile1, outmeile2);
		return question();
	}
	else if (answer6==2)
	{
		printf("Laengenmasse in Km:\n");
		scanf("%f",&outmeile1);
		inmeile1 = outmeile1*0.6214;
		inmeile2 = outmeile1*0.54;
		printf("Laengenmasse in Meile: %f mile(st.) & %f mile(naut.)\n",inmeile1,inmeile2);
		return question();
	}
}
float unzeconver()
{
	int answer8;
	float inunze,outunze;
	printf("*********************************************\n");
	printf("1. von Unze zu internationalen Massen\n2. von internationalen Massen zu Unze\n");
	printf("Geben Sie Ihre Wahl ein:\n");
	scanf("%d", &answer8);
	if (answer8==1)
	{
		printf("Gewichst in Unze:\n");
		scanf("%f",&inunze);
		outunze = inunze*28.35;
		printf("Gewichst in internationalen Massen: %fg\n", outunze);
		return question();
	}
	else if (answer8==2)
	{
		printf("Gewichst in internationalen Massen:\n" );
		scanf("%f",&outunze);
		inunze = outunze*0.0353;
		printf("Gewichst in Unze: %foz.\n",inunze);
		return question();
	}
}
float pfundconver()
{
	int answer9;
	float inpfund,outpfund;
	printf("*********************************************\n");
	printf("1. von Pfund zu internationalen Massen \n2. von internationalen Massen zu Pfund\n");
	printf("Geben Sie Ihre Wahl ein:\n");
	scanf("%d",&answer9);
	if (answer9==1)
	{
		printf("Gewichst in Pfund:\n");
		scanf("%f",&inpfund);
		outpfund = inpfund*0.45359;
		printf("Gewichst in  internationalen Massen: %fkg\n",outpfund);
		return question();
	}
	else if (answer9==2)
	{
		printf("Gewichst in Kg:\n");
		scanf("%f",&outpfund);
		inpfund = outpfund*2.205;
		printf("Gewichst in Pfund: %flb.\n",inpfund);
		return question();
	}
}
int question()
{
	printf("*********************************************\n");
	printf("1. Umrechnung von Laengenmasse\n2. Umrechnung von Gewichstmasse.\n");
	scanf("%d",&answer1);
	if (answer1==1) 
	{
		printf("*********************************************\n");
		printf("1. Zoll\n2. Fuss\n3. Schritt\n4. Meile\n0. Exit program\n ");
		printf("Geben Sie Ihre Wahl ein:\n");
		scanf("%d",&answer2);
		if (answer2==1)
		{
			zollconvert();
		}
		else if (answer2==2)
		{
			fussconvert();
		}
		else if (answer2==3)
		{
			schrittconvert();
		}
		else if (answer2==4)
		{
			meileconvert();	
		}
		else if (answer2==0)
		{
			return 0;
		}
	}
	else if(answer1==2)
	{
		int answer7;
		printf("*********************************************\n");
		printf("1. Unze\n2. Pfund\n");
		printf("Geben Sie Ihre Wahl ein:\n");
		scanf("%d",&answer7);
		if (answer7==1)
		{
			unzeconver();
		}
		else if (answer7==2)
		{
			pfundconver();
		}
	}
	else if(answer1==0)
	{
		return 0;
	}
	else
	{
		printf("Ihre Wahl muss 0 - 2 sein\n");
		return question();
	}
}

int main(int argc, char const *argv[])
{
	question();
	return 0;
}