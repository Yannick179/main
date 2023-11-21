#include <stdio.h>

#define LEN 9

int main(){
    int geldmenge;
    printf("Geben sie die Geldmenge ein: ");
    scanf("%i", &geldmenge);
    int j;
    int scheinanzahl[9];
    int geldeinheit[LEN] = {500, 200, 100, 50, 20, 10, 5, 2,1};
    for (int i = 0; i < LEN; i++){
        j = 0;
        while ((j+1)*geldeinheit[i] <= geldmenge){
            j++;
        }
        geldmenge -= j*geldeinheit[i];
        scheinanzahl[i] = j;
    }
    for (int i = 0; i < LEN; i++){
        printf("%i * %i\n", geldeinheit[i], scheinanzahl[i]);
    }
    return 0;
}