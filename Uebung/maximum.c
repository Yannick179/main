#include <stdio.h>
#include <stdlib.h>
int main (void){
    int n1, n2;
    //printf("Number 1: ");
    scanf("%i", &n1);
    //printf("Number2: ");
    scanf("%i", &n2);
    if (n1<n2){
        printf("Maximum: %i\n", n2);
    }
    else{
        printf("Maximum: %i\n", n1);
    }
    return 0;
}