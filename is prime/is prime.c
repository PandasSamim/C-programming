#include <stdio.h>

int isPrime(int n){
  if(n<=1) return 0;
  if(n==2 || n==3) return 1;
  if(n%2==0 || n%3==0) return 0;
  for(register int i=5; i*i<=n; i+=2){
    if(n%i==0) return 0;
  }
  return 1;
}

int main(){
  int n;
  printf("Enter number: ");
  if(scanf("%d", &n)!=1){
    printf("Invalid Input.\n");
    return 1;
  }
  if(isPrime(n)){
    printf("%d is prime.\n", n);
  }else{
    printf("%d is not prime \n", n);
  }
  return 0;
}
