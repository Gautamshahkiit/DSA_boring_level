// 1.WAP to find the largest number and counts the occurrence of the largest number in an array of n integers using a single loop. 

#include <stdio.h>

int main() {
  int arr[7] = {2, 3, 5, 6, 7, 8, 8};
  int maxm = 0, cnt = 0;
  for (int i = 0; i < 7; i++){
    if (arr[i] > maxm){
      maxm = arr[i];
      cnt = 1;
    } 
    else if (arr[i] == maxm) {
      cnt++;
    }
  }
  printf("%d %d", maxm, cnt);
  return 0;
}