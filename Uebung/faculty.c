#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int faculty_n = 1;
    scanf("%i", &n);

    while(n>0){
        faculty_n = faculty_n * n;
        n -= 1;
    }
    printf("%d\n", faculty_n);
    return 0;
}