#include <stdio.h>


int add(int x, int y);

int main(void) {
    int z = add(add(5, 3), add(3, 2));
    printf("%i\n", z);
}

int add(int x, int y) {
    return x + y;
}