#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

//sentences(. or ? or !)
//letters (isalpha)
//words

int main(void){
    int words = 0;
    int letters = 0;
    int sentences = 0;
    string text = get_string("Text: ");
    for(int i = 0, length = strlen(text); i < length; i++){
        char c = text[i];
        if (c == '.' ||
        c == '?' ||
        c == '!'){
            sentences += 1;
        }
        else if (isalpha(c) != 0){
            letters += 1;
        }
        else if (c == ' '){
            words += 1;
        }
    }
    words = words + 1;
    double letteraverage = (letters * 1.00 / words) * 100;
    double sentenceaverage = (sentences * 1.00/ words) * 100;
    int index = round(0.0588 * letteraverage - 0.296 * sentenceaverage - 15.8);
    if (index < 1){
        printf("Before Grade 1\n");
    }
    else if (index >= 16){
        printf("Grade 16+\n");
    }
    else {
        printf("Grade %i\n", index);
    }
}