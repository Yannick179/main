#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int get_card(string n);
int checkluna(string n);

int main(void) 
{
    string number;
    bool digit = true;
    do
    {
        digit = true;
        number = get_string("Number: ");
        int length = strlen(number);
        for (int i = 0; i < length; i++) {
            if(isdigit(number[i]) == 0) {
                digit = false;
            }
        }
    } while (digit == false);
    if (checkluna(number) == 0) {
        get_card(number);
    }
    else {
        printf("INVALID\n");
    }
    
}

int get_card(string n){
    if (strlen(n) == 15 && 
        n[0] == '3' && 
        (n[1] == '4' || n[1] == '7')) {
        printf("AMERICAN EXPRESS\n");
    }
    else if (strlen(n) == 16 && 
    n[0] == '5' && 
    (n[1] == '1' || n[1] == '2' || n[1] == '3' || n[1] == '4' || n[1] == '5')) {
        printf("MASTERCARD\n");
    }
    else if ((strlen(n) == 16 || strlen(n) == 13) && n[0] == '4') {
        printf("VISA\n");
    }
    else {
        printf("INVALID\n");
    }
}

int checkluna(string creditcard){
    int i = 0;
    int sum = 0;
    int digitcount = strlen(creditcard);
    for (int length = strlen(creditcard); digitcount > 0; digitcount -= 1) {
        int index = digitcount - 1;
        int index_value = creditcard[index] - '0';
        if (i % 2 == 0) {
            sum = sum + index_value;
        }
        else {
            sum = sum + (2*index_value);
        }
        i++;
    }
    printf("%i\n", sum);
}