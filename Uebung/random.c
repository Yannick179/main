#include <stdio.h>
#include <time.h>

int main(void){
    srand(time(0));
    int r = rand();
    int i;
    printf("Random Number between 1 and 1000: ");
    scanf("%i", &i);
    if (i < r){
        printf("Smaller than the number \n");
    }
    else if (i > r){
        printf("Bigger than the number \n");
    }
    else{
        printf("You found the Number.\n");
    }
}