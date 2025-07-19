//Write a program in C to read two numbers and print the greater number, if both the numbers are same them print “EQUAL”.
#include <stdio.h>

int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if(num1>num2){
        printf("%d is greater number.\n", num1);
    } else if(num1<num2){
        printf("%d is greater number.\n", num2);
    } else {
        printf("%d and %d are EQUAL\n", num1, num2);
    }
    return 0;
}
