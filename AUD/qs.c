#include <stdio.h>

int qs(int n){   
    int quersumme = 0;
    int value_at_i;
    int i = 0;
    
    while(n != 0) {
        value_at_i = n % 10;
        quersumme += value_at_i;
        n = (n - value_at_i) / 10;
    }
    return quersumme;
}
