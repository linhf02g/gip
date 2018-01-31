#include<stdio.h>
char *encipher(char string[],int key);
char *decipher(char string[],int key);
char *encipher(char string[],int key){
	char tran;
    for(int i = 0; string[i] != '\0'; ++i){
        tran = string[i];
        if(tran >= 97 && tran <= 122){
            tran = tran + 20 + key;
            if(tran > 122){
                tran = tran - 122 + 97 - 1;
            }
            	string[i] = tran;
        }
        else if(tran >= 65 && tran <= 90){
            tran = tran + 20 + key;
            
            if(tran > 90){
                tran = tran - 90 + 65 - 1;
            }
            string[i] = tran;
        }
    }
    printf("Encrypted message: %s", string);
}
char *decipher(char string[],int key){
	char tran;
	for(int i = 0; string[i] != '\0'; ++i){
        tran = string[i];  
        if(tran >= 97 && tran <= 122){
            tran = tran - 20 - key;
            if(tran < 97){
                tran = tran + 122 - 97 + 1;
            }
            string[i] = tran;
        }
        else if(tran >= 65 && tran <= 90){
            tran = tran - 20 - key;
            if(tran < 65){
                tran = tran + 90 - 65 + 1;
            }
            string[i] = tran;
        }
    }
    
    printf("Decrypted message: %s", string);
}
int main(int argc, char const *argv[])
{
	char string[999];
	int key,an;
	printf("Enter a message: ");
    gets(string);
    printf("Enter key: ");
    scanf("%d", &key);
    char princhar;
    princhar = string[0];
    printf("%d\n",princhar);
    printf("1. to encode\n");
    printf("2. to decode\n");
    scanf("%d",&an);
    if(an==1){
    	encipher(string,key);
    }
	else if (an==2){
		decipher(string,key);
	}
	return 0;
}