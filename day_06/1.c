// 1. Reverse a number using Stack

#include <stdio.h>
#include <stdlib.h>

typedef struct Stack{
  int top;
  int capacity;
  int* array;
}stack;

stack* newstack(int mem){
  stack* stk = (stack*)malloc(sizeof(stack));
  stk->capacity = mem;
  stk->top = -1;
  stk->array = (int *)malloc(stk->capacity * sizeof(int));
  return stk;
}

int overload(stack* stk){
  if(stk->top + 1 == stk->capacity)
    return 1;
  return 0;
}

int empty(stack* stk){
  if(stk->top == -1){
    return 1;
  }
  return 0;
}

void push(stack* stk, int x){
  if(overload(stk)){
    return;
  }
  int position = ++stk->top;
  stk->array[position] = x;
  printf("position = %d, pushed: %d\n", position, x);
}

void pop(stack* stk){
  int position = stk->top--;
  int dlt = stk->array[position];
  printf("position = %d, popped: %d\n", position, dlt);
}

void print(stack* stk){
  for(int i = 0; i <= stk->top; i++)
    printf("%d ", stk->array[i]);
  printf("\n");
}

int main(){
  stack* stk = newstack(10);

  if(empty(stk))
    printf("Stack is empty\n");
  else
    printf("Stack is not empty\n");

  push(stk, 5);
  push(stk, 6);
  push(stk, 7);
  push(stk, 8);

  print(stk);

  if(empty(stk))
    printf("Stack is empty\n");
  else
    printf("Stack is not empty\n");

  pop(stk);
  pop(stk);

  print(stk);

  return 0;
}