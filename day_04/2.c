// 2)program for Sparse Matrix Representation using Array

#include <stdio.h>
int main()
{
  int mat[5][5] = {{0, 4, 0, 5, 1}, {0, 0, 3, 6, 0}, {0, 0, 2, 0, 2}, {2, 3, 0, 0, 0}, {0, 0, 0, 0, 0}};
  int count = 0;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (mat[i][j] != 0)
        count++;
    }
  }
  int store[3][count];
  int k = 0;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if(mat[i][j] != 0){
        store[0][k] = i;
        store[1][k] = j;
        store[2][k] = mat[i][j];
        k++;
      }
    }
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < count; j++){
      printf("%d ", store[i][j]);
    }
    printf("\n");
  }

  return 0;
}