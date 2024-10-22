#include <stdio.h>

// Fonction pour l'addition
float addition(float a, float b) {
    return a + b;
}

// Fonction pour la soustraction
float soustraction(float a, float b) {
    return a - b;
}

// Fonction pour la multiplication
float multiplication(float a, float b) {
    return a * b;
}

// Fonction pour la division
float division(float a, float b) {
    while (b == 0) {
        printf("Erreur: Division par zéro non permise, entrez un autre nombre: ");
        scanf("%f", &b);
    }
    return a / b;
}

int main() {
    float num1, num2, S;
    char operation;
    int continuer = 1; 

    printf("Entrez deux nombres: ");
    scanf("%f %f", &num1, &num2);

    do {
        if (continuer == 1) {
            printf("----------- Selectionnez une operation -----------\n");
            printf("+ (Addition)\n");
            printf("- (Soustraction)\n");
            printf("* (Multiplication)\n");
            printf("/ (Division)\n");
            printf("Choisissez une option: ");
        }
        
        scanf(" %c", &operation); 

        switch (operation) {
            case '+': 
                S = addition(num1, num2);
                printf("Resultat: %.2f + %.2f = %.2f\n", num1, num2, S);
                continuer = 0; 
                break;

            case '-': 
                S = soustraction(num1, num2);
                printf("Resultat: %.2f - %.2f = %.2f\n", num1, num2, S);
                continuer = 0;  
                break;

            case '*': 
                S = multiplication(num1, num2);
                printf("Resultat: %.2f * %.2f = %.2f\n", num1, num2, S);
                continuer = 0; 
                break;

            case '/': 
                S = division(num1, num2);
                printf("Resultat: %.2f / %.2f = %.2f\n", num1, num2, S);
                continuer = 0; 
                break;

            default:
                printf("Operation invalide. Reessayez.\n");
                continuer = 1; 
                break;
        }

    } while (continuer == 1); 
}
