//Write a program in C to calculate the average of a set of N numbers.
#include <stdio.h>

int main(){
    int n;
    float total=0, avg;
    printf("Enter number: ");
    scanf("%d", &n);
    float arr[n];
    printf("Enter the all numbers: \n");
    for(int i=0; i<n; i++){
        printf("#%d: ", i+1);
        scanf("%f", &arr[i]);
    }
    for(int i=0; i<n; i++){
        total+=arr[i];
    }
    avg=total/n;
    printf("AVG: %.2f\n", avg);
    return 0;
}
