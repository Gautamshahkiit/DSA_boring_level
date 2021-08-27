// 1. Store information of a student using structure
// Information to be stored:
// Roll number
// Name
// Address 
// Mark 1
// Mark 2
// Mark 3

#include <stdio.h>
#include <stdlib.h>

typedef struct student{
  char roll[10];
  char address[50];
  int m1, m2, m3;
}student;

int main(){
  student s1;
  // s1.roll = (char *)malloc(10 * sizeof(char));
  // s1.address = (char *)malloc(10 * sizeof(char));
  fgets(s1.roll, sizeof(s1.roll), stdin);
  fgets(s1.address, sizeof(s1.address), stdin);
  scanf("%d %d %d", &s1.m1, &s1.m2, &s1.m3, &s1.roll, &s1.address);
  printf("%s %s %d %d %d", s1.roll, s1.address, s1.m1, s1.m2, s1.m3);
  return 0;
}