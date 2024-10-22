#include <stdio.h>

int add(int a, int b) {
    return a + b; 
}

int main() {
    int num1, num2, result;

    printf("Entrez le premier nombre: ");
    scanf("%d", &num1);

    printf("Entrez le deuxieme nombre: ");
    scanf("%d", &num2);

    result = add(num1, num2);

    printf("La somme de %d et %d est: %d\n", num1, num2, result);

    return 0;
}
