//Write a program in C to read n numbers and print the even/odd numbers up to n.
#include <stdio.h>

int main(){
  int n;
  printf("Enter number of Inputs: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter number: \n");
  for(int i=0; i<n; i++){
    printf("#%d: ", i+1);
    scanf("%d", &arr[i]);
  }
  for(int i=1; i<n; i++){
    if(i%2==0){
      printf("%d is even number.\n", i);
    }else{
      printf("%d is Odd number.\n", i);
    }
  }
  return 0;
}
