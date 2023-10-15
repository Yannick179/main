#include <stdio.h>
#include <cs50.h>

int main(void){
    int number;
    do
    {
        number = get_int("Give me a Number: ");
    } while (number < 1 || number > 8);


    for (int i = 0; i < number; i++){
        for (int n = number - i; n > 0; n--){
            printf(" ");
        }
        for (int k = 0;k < i+1; k++){
            printf("#");
        }
        printf(" ");
        for (int k = 0;k < i+1; k++){
            printf("#");
        }
        printf("\n");
    }
}

