#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

struct Node* head = NULL;

void insertAtBeginning(int data) {
  struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
  temp->data = data;
  temp->next = head;
  head = temp;
}

void insertAt(int index, int data) {
  if (index == 0) {
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;
    head = temp;
    return;
  }

  struct Node* ptr = head;
  for (int i = 0; i < index - 1; i++) {
    ptr = ptr->next;
  }

  struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
  temp->data = data;
  temp->next = ptr->next;
  ptr->next = temp;
}

void deleteFromBeginning() {
  if (head == NULL) {
    return;
  }

  // if (head->next == NULL) {
  //   free(head);
  //   head = NULL;
  // }

  struct Node* temp = head;
  head = head->next;
  free(temp);
}

void deleteAt(int index) {
  if (head == NULL) {
    return;
  }

  if (index == 0) {
    if (head->next == NULL) {
      free(head);
      head = NULL;
    }

    struct Node* temp = head;
    head = head->next;
    free(temp);
  }

  struct Node* p = head;
  struct Node* q = NULL;

  for (int i = 0; i < index; i++) {
    q = p;
    p = p->next;
  }

  if (q) {
    q->next = p->next;
  }
  free(p);
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
  // insertAtBeginning(11);
  // insertAtBeginning(12);
  // insertAtBeginning(13);
  // insertAtBeginning(14);
  insertAt(0, 11);
  insertAt(1, 13);
  insertAt(2, 15);
  insertAt(3, 17);
  printLinkedList();
  insertAt(2, 99);
  printLinkedList();
  deleteAt(4);
  printLinkedList();
  return 0;
}