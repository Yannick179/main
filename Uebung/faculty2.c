#include <stdio.h>

#define LEN 1001

int main(){
    //1 is not prime 0 is prime
    int numbers[LEN];
    numbers[0] = 0;
    numbers[1] = 0;
    for(int i = 2; i < LEN; i++){
        numbers[i] = 1;
    }
    for(int i = 2; i < LEN; i++){
        if(numbers[i] != 0){
            for(int j = 2*i; j < LEN; j+=i){
                numbers[j] = 0;
            }
        }    
    }
    for (int i = 0; i < LEN; i++){
        if (numbers[i] == 1){
            printf("%i \n", i);
        }
    }
}