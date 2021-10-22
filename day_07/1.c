// Implementation of Queue using Array

#include <stdio.h>
#include <stdlib.h>

typedef struct Queue{
  int front, rear, size;
  unsigned capacity;
  int* array;
}Queue;

Queue* createQueue(unsigned capacity){
  Queue* queue = (Queue*)malloc(sizeof(Queue));
  queue->capacity = capacity;
  queue->front = queue->size = 0;
  queue->rear = capacity - 1;
  queue->array = (int*)malloc(queue->capacity* sizeof(int));
  return queue;
}

int full(Queue* queue){
  return queue->size == queue->capacity;
}

int empty(Queue* queue){
  return queue->size == 0;
}

void enqueue(Queue* queue, int x){
  if(full(queue))
    return;
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue-> array[queue->rear] = x;
    queue->size = queue->size + 1;
    printf("Enqueued: %d\n", x);
}

int dequeue(Queue* queue){
  if(empty(queue))
    return 1111;
    return queue->array[queue->rear];
}

int main(){
  Queue* queue = createQueue(1000);
  enqueue(queue, 10);
  enqueue(queue, 20);
  enqueue(queue, 30);
  enqueue(queue, 40);

  printf("Dequeued: %d\n", dequeue(queue));
  printf("Front: %d\n", front(queue));
  printf("Rear: %d\n", rear(queue));

  return 0;
}