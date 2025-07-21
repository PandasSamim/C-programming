//Write a program in C to read a number and print the sum of n natural numbers.
#include <stdio.h>

int main(){
    int n, sum=0;
    printf("Enter Number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    printf("Sum of %d natural numbers: %d\n", n, sum);
    return 0;
}
