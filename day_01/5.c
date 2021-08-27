// 5.Write a program to find prime numbers in an array and store it in another array using dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>

int prime(int x){
  for(int i = 2; i <= x / 2; i++){
    if(x % i == 0){
      return 0;
    }
  }
  if(x < 2){
    return 0;
  }
  return 1;
}

int main(){
  int arr[10] = {2, 3, 4, 5, 6, 7, 8, 10, 11, 13};
  int count = 0;
  int *ans;
  ans = (int *)malloc(10 * sizeof(int));
  for(int i = 0; i < 10; i++){
    if(prime(arr[i])){
      ans[count] = arr[i];
      count++;
    }
  }
  for(int i = 0; i < count; i++){
    printf("%d ", ans[i]);
  }
  
  return 0;
}