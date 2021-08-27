// 4)Write a C program to merge two array to third array.

#include <stdlib.h>

int main(){
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int cnte = 0, cnto = 0;
  int *even;
  even = (int *)malloc(10 * sizeof(int));
  int *odd;
  odd = (int *)malloc(10 * sizeof(int));
  for(int i = 0; i < 10; i++){
    if(arr[i] % 2 == 0){
      even[cnte] = arr[i];
      cnte++;
    }
    else {
      odd[cnto] = arr[i];
      cnto++;
    }
  }
  for(int i = 0; i < cnte; i++){
    printf("%d ", even[i]);
  }
  printf("\n");
  for(int i = 0; i < cnto; i++){
    printf("%d ", odd[i]);
  }
  int *ret;
  ret = (int *)malloc(10 * sizeof(int));
  for(int i = 0; i < cnte; i++){
    ret[i] = even[i];
  }
  printf("\n");
  for(int i = cnte, j = 0; j  < cnto; i++, j++){
    ret[i] = odd[j];
  }
    for(int i = 0; i < 10; i++){
    printf("%d ", ret[i]);
  }

  return 0;
}