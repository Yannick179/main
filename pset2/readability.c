#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

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
    printf("%i words\n", words);
    printf("%i sentences\n", sentences);
    printf("%i letters\n", letters);

}