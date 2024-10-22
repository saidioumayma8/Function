#include <stdio.h>

void echanger(int *a, int *b) {
    int t;
    t = *a; 
    *a = *b; 
    *b = t; 
}

int main() {
    int a, b;

    printf("Entrez la valeur de a: ");
    scanf("%d", &a);
    printf("Entrez la valeur de b: ");
    scanf("%d", &b);

    printf("Avant echange, a = %d et b = %d\n", a, b);

    echanger(&a, &b);

    printf("Apres echange, a = %d et b = %d\n", a, b);

    return 0;
}
