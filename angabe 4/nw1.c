// Nummer in worts
#include<stdio.h>
#include<string.h>
	int main()
	{
		int len=0,x,one,ten;
		int no;
		char *a[] = {"Ein", "Eins", "Zwei", "Drei", "Vier","Fuenf", "Sechs", "Sieben", "Acht", "Neun"};
		char *mehr10w20[] = {"", "Zehn", "Elf", "Zwoelf", "Dreizehn", "Vierzehn","Fuenfzehn", "Sechzehn", "Siebzehn", "Achtzehn", "Neunzehn"};
		char *pw10[] = {"","","Zehn","Zwanzig", "Dreissig", "Vierzig", "Fuenfzig","Sechzig", "Siebzig", "Achtzig", "Neunzig"};
		printf("Geben Sie eine Zahl ein:");
		scanf("%d",&no);
		x = no;
		while(no!=0)
		{
			no = no/10;
			len++;
		}
		if(len==1)
		{
			printf("Nummer in Worts: %s",a[x]);
		}
		else if(len==2)
		{
			if(x>19)
			{ 
				one = x%10;
				ten = x/10;
				if (one==0)
				{
					printf("Nummer in Worts: %s",pw10[ten+1] );
				}
				else if(one==1)
				{
					printf("Nummer in Worts: %sund%s",a[0],pw10[ten+1]);
				}
				else
				printf("Nummer in Worts: %sund%s",a[one],pw10[ten+1]);
			}
			else
			{
				one = x%10;
				printf("Nummer in Worts: %s",mehr10w20[one+1]);
			}
		}
		
		return 0;
	}