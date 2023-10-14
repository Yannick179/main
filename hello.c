#include <stdio.h>
#include <cs50.h>


int main(void){
    string answer = get_string("Whats your Name? ");
    printf("Hello %s\n", answer);
}