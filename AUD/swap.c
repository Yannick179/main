#include <stdio.h>

void swoop(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int x = 3, y = 6;
    swoop(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}