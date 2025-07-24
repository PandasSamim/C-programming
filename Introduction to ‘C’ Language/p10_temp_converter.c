//Write a program in C convert the temperature given in Celsius to Fahrenheit or vice-versa.
//c/5=f-32/9
#include <stdio.h>

int main(){
    int chose;
    float n, result;
    printf("--- Chose a option ---\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter Your choice: ");
    scanf("%d", &chose);
    switch(chose){
        case 1:
            printf("Ente temp in Celsius: ");
            scanf("%f", &n);
            result=(n*9/5)+32;
            printf("Fahrenheit: %.2f\n", result);
            break;
        case 2:
            printf("Enter temp in Fahrenheit: ");
            scanf("%f", &n);
            result=(n-32)*5/9;
            printf("Celsius: %.2f\n", result);
            break;
        default:
            printf("Invalid Input.\n");
    }
    return 0;
}
