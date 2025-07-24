//Write a program in C that reads a floating-point number and then displays the right most digits of integral part of the number.
// 21.5 -> 1
#include <stdio.h>
int main(){
    float n;
    int integerPart, rightMostPart;
    printf("Enter number: ");
    scanf("%f", &n);
    integerPart = (int)n;
    rightMostPart=integerPart%10;
    printf("Right most part: %d\n", rightMostPart);
    return 0;
}
