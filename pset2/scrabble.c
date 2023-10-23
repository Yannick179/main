#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int get_points(string word);

int main(void){
    string player1 = get_string("Player 1: ");    
    string player2 = get_string("Player 2: ");
    int points_1 = get_points(player1);
    int points_2 = get_points(player2);
    if (points_1 > points_2){
        printf("Player 1 wins.\n");
    }
    else if (points_1 < points_2){
        printf("Player 2 wins.\n");
    }
    else {
        printf("Equal.\n");
    }
}

int get_points(string word){
    int sum = 0;
    for(int i = 0, length = strlen(word); i < length; i++){
        word[i] = tolower(word[i]);
        if (word[i] == 'a' || 
        word[i] == 'e' || 
        word[i] == 'i' || 
        word[i] == 'l' || 
        word[i] == 'n' || 
        word[i] == 'o' || 
        word[i] == 'r' || 
        word[i] == 's' || 
        word[i] == 't' ||
        word[i] == 'u'){
            sum += 1;
        }    
        else if (word[i] == 'd' || 
        word[i] == 'g'){
            sum = sum + 2;
        }    
        else if (word[i] == 'b' || 
        word[i] == 'c' || 
        word[i] == 'm' || 
        word[i] == 'p'){
            sum = sum + 3;
        }
        else if (word[i] == 'f' || 
        word[i] == 'h' || 
        word[i] == 'v' || 
        word[i] == 'w' ||  
        word[i] == 'y'){
            sum = sum + 4;
        }
        else if (word[i] == 'k'){
            sum = sum + 5;
        }
        else if (word[i] == 'j' ||
        word[i] == 'x'){
            sum = sum + 8;
        }  
        else if (word[i] == 'z' ||
        word[i] == 'q'){
            sum = sum + 10;
        }
    }
    return sum;
}
