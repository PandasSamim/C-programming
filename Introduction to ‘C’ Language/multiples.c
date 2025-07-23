//Write a program in C to read a number n and print first 10 multiples of n.
#include <stdio.h>

int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);
    for(int i=1; i<11; i++){
        printf("%d * %d = %d\n", n, i, n*i);
    }
    return 0;
}
