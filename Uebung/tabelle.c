#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%i", &n);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            printf("%i\t", i*j);
        }
        printf("\n");
    }
    return 0;
}