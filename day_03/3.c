// 3. Store information of n students using structures
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
  student s[2];
  // s1.roll = (char *)malloc(10 * sizeof(char));
  // s1.address = (char *)malloc(10 * sizeof(char));

  for(int i = 0; i < 2; i++){
    fgets(s[i].roll, sizeof(s[i].roll), stdin);
    fgets(s[i].address, sizeof(s[i].address), stdin);
    scanf("%d %d %d", &s[i].m1, &s[i].m2, &s[i].m3, &s[i].roll, &s[i].address);
  }

  for(int i = 0; i < 2; i++){
    printf("%s %s %d %d %d", s[i].roll, s[i].address, s[i].m1, s[i].m2, s[i].m3);
  }
  return 0;
}