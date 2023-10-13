#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char i[30];
    int n;
    do
    {
        printf("Number: ");
        scanf("%s", i);
        n = atoi(i);
    } while (n < 1 || n > 8);
    
    printf("%i\n", n);
}

LOOK FOR ASCI MISTAKES