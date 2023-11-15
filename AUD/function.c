#include <stdio.h>
int f(int n);
int f_it(int n);

int main (){
    int n = 4;
    printf("f(%i): %i\n", n, f(n));
    printf("f(%i): %i\n", n, f_it(n));

}

int f(int n){
    if (n == 0) return 3;
    if (n == 1) return 5;
    return f(n - 1) + 2* f(n - 2);
}

int f_it(int n) {
    if (n == 0) return 3;
    if (n == 1) return 5;
    int n1 = 3;
    int n2 = 5;
    int a;
    int i = 1;

    while (i < n) {
        a = n2;
        n2 = n2 + 2 * n1;
        n1 = a;
        i++;
    }
    return n2;
}
    