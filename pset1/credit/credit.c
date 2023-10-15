#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>


int get_card(string n);

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

    get_card(number);
}

int get_card(string n){
    if (strlen(n) == 13 && n[0] == '3' && (n[1] == '4' || n[1] == '7')) {
        printf("yes");
    }
}
