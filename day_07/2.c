// Implementation of queue using linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct Queue{
  int front, rear, size;
  unsigned capacity;
  int* array;
}Queue;