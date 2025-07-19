//Write a program in C to read two numbers and produce the sum and product of those numbers and show the result separately.
#include <stdio.h>

int main(){
    int num1, num2, sum, product;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    product=num1 * num2;
    printf("SUM=%d\nPRODUCT=%d\n", sum, product);
    return 0;
}
