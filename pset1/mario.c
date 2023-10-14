#include <stdio.h>
#include <cs50.h>

int main(void){
    
    int number = get_int("Give me a Number: ");
    for (int i = 0; i < number; i++){
        for (int n = number; number > 0; number--){
            printf("#");
        }
    }
}
