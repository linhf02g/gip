#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void nummerworts(char *num)
{
    int len = strlen(num);  // Get number of digits in given number
 
    /* Base cases */
    if (len == 0) {
        fprintf(stderr, "empty string\n");
        return;
    }
    char *single_digits[] = { "null", "eins", "zwei", "drei", "vier",
                              "fuenf", "sechs", "sieben", "acht", "neun"};
 
    char *two_digits[] = {"", "zehn", "elf", "zwoelf", "dreizehn", "vierzehn",
                     "fuenfzehn", "sechzehn", "siebzehn", "achtzehn", "neunzehn"};
 
    char *tens_multiple[] = {"", "", "zwanzig", "dreissig", "vierzig", "fuenfzig",
                             "sechzig", "siebzig", "achtzig", "neunzig"};
    if (len == 1) {
        printf("%s\n", single_digits[*num - '0']);
        return;
    }

        else {
            if (*num == '1') {
                int sum = *num - '0' + *(num + 1)- '0';
                printf("%s\n", two_digits[sum]);
                return;
            }
 
            else if (*num == '2' && *(num + 1) == '0') {
                printf("twenty\n");
                return;
            }
 
            else {
                int i = *num - '0';
                printf("%s ", i? tens_multiple[i]: "");
                ++num;
                if (*num != '0')
                    printf("%s ", single_digits[*num - '0']);
            }
        }
        ++num;
}

int main(void)
{
    int nummerworts;
    printf("Geben Sie eine Zahl ein: \n");
    scanf("%d", &nummerworts);
    return 0;
}
 
/* Driver program to test above function */
