#include <stdio.h>

void bubbleSortDescending(int arr[], int n){
  for(int i=0; i<n-1; i++){
    for(int j=0; j<n-1-i; j++){
      if(arr[j]<arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
}

int main(){
  int n;
  printf("Enter number of Elements: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter array element:\n");
  for(int i=0; i<n; i++){
    printf("#%dE: ", i+1);
    scanf("%d", &arr[i]);
  }
  
  printf("Original Array:\n");
  for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");

  bubbleSortDescending(arr, n);
  printf("Sorted Array:\n");
  for(int i=0; i<n; i++){
    printf("%d ", arr[i]);
  }

  return 0;
}
