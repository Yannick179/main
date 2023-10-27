#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool checkletteronce(string text, int length){
    for (int i = 0; i < length; i++){
        int countcmpvalue = 0;
        char letter = text[i];
        for (int n = 0; n < length; n++){
            char letter2 = text[n];
            if (letter != letter2){
                countcmpvalue++;
            }
        }
        printf("%i", countcmpvalue);
    }
}

int main(void){
    checkletteronce("abcdefg", 7);
}