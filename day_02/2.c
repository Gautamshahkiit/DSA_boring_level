// 2)Write a C program to copy all elements from an array to another array.

#include <stdio.h>
#include <stdlib.h>

int main(){
  int arr[10] = {1, -2, -3, 4, 5, -6, 7, 8, 9, 10};
  int count = 0;
  int *ans;
  ans = (int *)malloc(10 * sizeof(int));
  for(int i = 0; i < 10; i++){
    ans[i] = arr[i];
  }
  for(int i = 0; i < 10; i++){
    printf("%d ", ans[i]);
  }
  return 0;
}