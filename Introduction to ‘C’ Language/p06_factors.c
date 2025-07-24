#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("All factor of %d is: ", n);
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            printf("%d ", i);
            if(i != n/i){
                printf("%d ", n/i);
            }
        }
    }
    return 0;
}
