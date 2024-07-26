#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* prev;
  struct Node* next;
};

struct Node* head = NULL;

void insertAtBeginning(int data) {
  struct Node* temp = (struct Node*) malloc(sizeof(struct Node));

  temp->data = data;
  temp->next = head;
  head = temp;
}

void deleteFromBeginning() {
  if (head == NULL) {
    return;
  }

  struct Node* temp = head;
  head = head->next;
  head->prev = NULL;
  free(temp);
}

void printLinkedList() {
  struct Node* ptr = head;
  while (ptr) {
    printf("%d ", ptr->data);
    ptr = ptr->next;
  }
  printf("\n");
}

int main() {
  insertAtBeginning(11);
  insertAtBeginning(12);
  insertAtBeginning(13);
  insertAtBeginning(14);
  printLinkedList();
  deleteFromBeginning();
  printLinkedList();
  return 0;
}