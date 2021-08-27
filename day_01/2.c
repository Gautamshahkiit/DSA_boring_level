// 2.WAP to arrange the elements of an array such that all even numbers are followed by all odd numbers using a single loop.
#include <stdio.h>

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int i = 0, j = 9;
  while (i < j) {
    if (arr[i] % 2 == 1) {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      j--;
    }
    else {
      i++;
    }
  }
  for (int i = 0; i < 10; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}