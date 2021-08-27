// 4.Write a program to input n elements to an array and display that array using dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>

int main(){
  int *arr;
  arr = (int *) malloc(10 * sizeof(int));
  // arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for(int i = 0; i < 10; i++){
    scanf("%d", arr + i);
  }
  for (int i = 0; i < 10; i++){
    printf("%d ", *(arr + i));
  }
  return 0;
}