#include <stdio.h>
#include <stdlib.h>

int main() {
    typedef struct node *pointer;
    typedef struct node
    {
        int value;
        pointer pointer_n_e;
    } element;

    int n = 5;
    int n2 = 6;
    int n3 = 7;
    int n4 = 8;
    pointer p = (pointer) malloc(sizeof(element));
    pointer r = (pointer) malloc(sizeof(element));
    pointer q = (pointer) malloc(sizeof(element));
    pointer s = (pointer) malloc(sizeof(element));
    (*p).value = n;
    (*p).pointer_n_e = r;
    (*r).value = n2;
    (*r).pointer_n_e = q;
    q->value = n3;
    q->pointer_n_e = s;
    s->value = n4;
    s->pointer_n_e = NULL;
    
    printf("value: %i, pointer: %d, %p", p->value, (p->pointer_n_e)->value, p);
    
    int *new = p; 
    for (int i = 0; i < 4, i++) {
        printf("array[%i]=%i ");
    }
}