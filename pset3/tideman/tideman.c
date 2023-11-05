#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define MAX 9

int check_argc(int argc);
int check_name(string name, string list[], int listlength);

int main(int argc, string argv[]){
    if (check_argc(argc)){
        return 1;
    }
    int array [9][9];
    string votelist[3];
    int number_of_voters = get_int("Number of Voters: ");
    for (int i = 0; i < number_of_voters; i++){
        for (int n = 0; n < 3; n++){
            votelist[n] = get_string("Rank %i: ", n);
            if(!check_name(votelist[n], argv, (argc-1))){
                printf("INVALID NAME");
            }
        }

    }
}

int check_argc(int argc){
    if (argc < 2){
        printf("usage: ./tideman candidates \n");
        return 1;
    }
    if (argc > MAX+1){
        printf("please enter a maximum of %i candidates\n", MAX);
        return 1;
    }
    return 0;
}

int check_name(string name, string list[], int listlength){
    for (int i = 0; i < listlength; i++){
        if(!strcmp(name, list[i])){
            return 0;
        }
    }
    return 1;
}


WORK ON CHECKNAME