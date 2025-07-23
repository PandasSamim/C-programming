// Write a program in C to read a number n and print if n is “PRIME” or “COMPOSITE”.
#include <stdio.h>

int main(){
    int n, flag=1;
    printf("Enter Number: ");
    scanf("%d", &n);
    if(n<=0) flag=0;
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    printf(flag?"%d is prime.\n":"%d is composite\n", n);
    return 0;
}
