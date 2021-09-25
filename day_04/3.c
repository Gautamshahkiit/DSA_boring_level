#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list {
  int row, col, val;
  struct linked_list *next;
}  ll ;

void add(ll **head, ll *node){
  ll *temp = *head;
  if(temp == NULL){
    *head = node;
    return;
  }
  while(temp->next != NULL){
    temp = temp->next;
  }
  temp->next = node;
  *head = node;
  return;
}
void append(ll** head_ref, int row, int col, int val)
{
    ll* new_node = (ll*) malloc(sizeof(ll));
 
    ll *last = *head_ref;
 
    new_node->row  = row;
    new_node->col  = col;
    new_node->val  = val;
 
    new_node->next = NULL;
 
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }
 
    while (last->next != NULL)
        last = last->next;
 
    last->next = new_node;
    return;
}

void print(ll *head){
  ll *temp = head;
  while(temp){
    printf("%d %d %d\n", temp->row, temp->col, temp->val);
    temp = temp->next;
  }
}

int main(){
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

  ll *head = NULL;
  ll *node = NULL;
  // head = (ll *)malloc(sizeof(ll));
  // node = (ll *)malloc(sizeof(ll));
    // head->row = store[0][0];
    // head->col = store[1][0];
    // head->val = store[2][0];
    // head->next = NULL;
  
  for(int i = 0; i < count; i++){
    // node->row = store[0][i];
    // node->col = store[1][i];
    // node->val = store[2][i];
    // node->next = NULL;
    // add(&head, node);
    append(&head, store[0][i], store[1][i], store[2][i]);
  }
  print(head);
  return 0;
}
