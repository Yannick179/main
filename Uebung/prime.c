#include <stdio.h>
#include <stdlib.h>

#define LEN 1001

int main(){
    unsigned int sieve[LEN];
    sieve[0] = 0;
    sieve[1] = 0;
    for (int i = 2; i < LEN; i++){
        sieve[i] = 1;
    }
    for (int i = 2; i < LEN; i++){
        if (sieve[i] != 0){
            for (int j = 2*i; j<LEN; j+= i){
                sieve[j]=0;
            
            }
        }
    }
    for (int i = 0; i<LEN; i++){
        if (sieve[i] != 0){
            printf("%i\n", i);
        }
    }
}