// 3.Write a program to find second largest and second smallest element in an array.
#include <stdio.h>

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int max = 0, smax = 0, min = 20, smin = 20;
  for (int i = 0; i < 10; i++){
    if (arr[i] > max) {
      smax = max;
      max = arr[i];
    }
    if (arr[i] > smax && arr[i] < max){
      smax = arr[i];
    }
    if (arr[i] < min) {
      smin = min;
      min = arr[i];
    }
    if (arr[i] < smin && arr[i] > min){
      smin = arr[i];
    }
  }
  printf("%d %d    %d %d", max, smax, min, smin);
  return 0;
}