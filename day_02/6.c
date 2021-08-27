// 6)WAP to test whether the given matrix is a unit matrix or not

#include <stdio.h>
int main(){
  int arr[3][3] = {
    {1, 0, 0},
    {0, 1, 0},
    {0, 0, 1}
  };
  int sumt = 0, sumd = 0;
  for(int i = 0; i < 3; i++){
    sumd += arr[i][i];
    for(int j = 0; j < 3; j++){
      sumt += arr[i][j];
    }
  }
  if(sumt == 3 && sumd == 3){
    printf("yes");
  }
  else{
    printf("no");
  }

}