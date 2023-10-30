#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_digit(string number);
string get_cipher(string plaintext, int key);

int main(int argc, string argv[]){
    if (argc != 2){
        printf("usage: ./caeser KEY\n");
        return 1;
    }

    string k_string = argv[1];
    if (check_digit(k_string) == 1){
        return 1;
    }

    int k = atoi(k_string);
    if (k < 0){
        printf("usage ./caeser KEY\n");
        return 1;
    }

    if (k > 26){
        k = k % 26;
    }

    string plaintext = get_string("Plaintext:  ");
    string ciphertext = get_cipher(plaintext, k);
    printf("ciphertext:  %s\n", ciphertext);
    return 0;
}










int check_digit(string number){
    int length = strlen(number);
    for (int i = 0; i < length; i++){
        if (isdigit(number[i]) == 0){
            printf("usage: ./caeser KEY\n");     
            return 1;      
        }
    }
    return 0;
}

string get_cipher(string plaintext, int key){
    int length = strlen(plaintext);
    
    for (int i = 0; i < length; i++){
        if (isalpha(plaintext[i])){
            if (isupper(plaintext[i])){
                plaintext[i] = plaintext[i] + key;
                if (plaintext[i] > 90){
                    plaintext[i] = plaintext[i] - 26;
                }
            }
            else {
                plaintext[i] = plaintext[i] + key;
                if (plaintext[i] > 122){
                    plaintext[i] = plaintext[i] - 26;
                }
            }
        }
    }
    return plaintext;
}