// 5)Write a C program to left rotate an array.

#include <stdio.h>
int main() {
  int arr[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  for(int j = 0; j < 3; j++){
    for(int i = 0, k = 2; i < k; i++, k--){
      int temp = arr[i][j];
      arr[i][j] = arr[k][j];
      arr[k][j] = temp;
    }
  }
  for(int i = 0; i < 3 - 1; i++){
    for(int j = 1; j < 3; j++){
      int temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
