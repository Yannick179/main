#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

bool checkalpha(string text, int length);
bool checkletteronce(string text, int length);
string encrypt(string plaintext, string key);

int main(int argc, string argv[]){
    
    if (argc != 2){
        printf("usage: ./substitution key\n");
        return 1;
    }
    string commandlinearguement = argv[1];
    int cml_length = strlen(commandlinearguement);
    if (strlen(commandlinearguement) != 26 ||
    checkalpha(commandlinearguement, cml_length) != true ||
    checkletteronce(commandlinearguement, cml_length) != true){
        printf("usage ./substitution key (26 letters)\n");
        return 1;
    }
    string plaintext = get_string("Plaintext: ");
    string ciphertext = encrypt(plaintext, commandlinearguement);
    printf("%s\n", ciphertext);
}

bool checkalpha(string text, int length){
    for (int i = 0; i < length; i++){
        if (isalpha(text[i]) == 0){
            return false;
        }
    }
    return true;
}

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
        countcmpvalue += 1;
        if (countcmpvalue != length){
            return false;
        }
    }
    return true;
}

string encrypt(string plaintext, string key){
    int length = strlen(plaintext);
    string ciphertext = plaintext;

    for (int i = 0; i < length; i++){
        char letter = ciphertext[i];
        if (isalpha(letter)){
            if (isupper(letter)){
                int index = letter - 65;
                ciphertext[i] = key[index];
                ciphertext[i] = toupper(ciphertext[i]);
            }
            else{
                int index = letter - 97;
                ciphertext[i] = key[index];
            }
        }
    }
    return ciphertext;
}