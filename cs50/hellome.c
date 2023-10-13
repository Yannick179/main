#include <stdio.h>

int main(void) {
    char name[30];
    printf("Whats your Name? ");
    scanf("%s", name);
    printf("Hello, %s\n", name);
}