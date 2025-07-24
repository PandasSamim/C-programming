//Write a program in C to determine and print the sum of the following harmonic series for a given value of n: 1+1/2+1/3+……..1/n.
// sum n=1 to n: 1/n
#include <stdio.h>

int main(){
    int n;
    float sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        sum+=1.0/i;
    }
    printf("Harmonic sum: %.2f\n", sum);
    return 0;
}
