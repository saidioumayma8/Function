#include <stdio.h>


// fontion dyal +
float addition(float a, float b){
    return a + b;
}

//fontion dyal -
float soustraction(float a, float b){
    return a - b;
}

//fontion dyal *
float multiplication(float a, float b){
    return a * b;
}

//fontion dyal /
float division(float a, float b){
  return a/b;
}
int main (){

    float num1, num2, S;
    char operation;

    printf("Enter two numbers: ");
    scanf("%f  %f", &num1, &num2);

    printf("-----------select lopiration-----------\n");
    printf("1. + (addition)\n");
    printf("2. = (soustraction)\n");
    printf("3. * (multilication)\n");
    printf("4. / (division)\n");
    printf("coisisie un option\n");
    scanf("%s", &operation);

    switch (operation)
    {
    case '1': 
    S = addition(num1, num2);
    printf("Result: %.2f + %.2f = %.2f\n", num1, num2, S);
        break;
    
    case '2': 
    S = soustraction(num1, num2);
    printf("Result: %.2f - %.2f = %.2f\n", num1, num2, S);
        break;
    
    case '3': 
    S = multiplication(num1, num2);
    printf("Result: %.2f * %.2f = %.2f\n", num1, num2, S);
        break;
    
    case '4': 

        if(num1 == 0 || num2 == 0){
        printf("Error: Division by zero is not allowed.\n");

    }else{
            S = division(num1, num2);
    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, S);
    }
    

        break;
    
    default:
        break;
    }

}