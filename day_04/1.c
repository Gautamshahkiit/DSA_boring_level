// 1)Check if a given matrix is sparse or not

#include <stdio.h>
int main(){
  int count = 0;
  int mat[5][5] = {{0, 4, 0, 5, 1},{0, 0, 3, 6, 0}, {0, 0, 2, 0, 2}, {2, 3, 0, 0, 0}, {0, 0, 0, 0, 0}};
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      if(mat[i][j] == 0){
        count++;
      }
    }
  }
  if(count > (25 - count)){
    printf("yes");
  }
  else{
    printf("no");
  }
  
  return 0;
}