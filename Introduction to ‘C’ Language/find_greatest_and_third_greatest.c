//Write a program in C multiple numbers say n and print the greatest and the third greatest.
#include <stdio.h>

int main(){
  int n, temp;
  printf("Enter number: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter number's:\n");
  for(int i=0; i<n; i++){
    printf("#%d: ", i+1);
    scanf("%d", &arr[i]);
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<i+1; j++){
      if(arr[i]>arr[j]){
        temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  printf("Greatest: %d\n", arr[0]);
  printf("Third Greatest: %d\n", arr[2]);
  return 0;
}
