#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};

struct Node* head = NULL;

int isEmpty() {
  if (head == NULL) {
    return 1;
  }
  return 0;
}

void push(int data) {
  // Insert at front
  struct Node* temp = (struct Node*) malloc(sizeof (struct Node));
  temp->data = data;
  
  temp->next = head;
  head = temp;
}

int pop() {
  // Delete from beginning
  if (isEmpty()) {
    printf("Stack underflow...");
    return -1;
  }

  int data = 0;
  // Only one node is there
  if (head->next == NULL) {
    data = head->data;
    free(head);
    head = NULL;
    return data;
  }

  struct Node* temp = head;
  head = head->next;
  data = temp->data;
  free(temp);
  return data;
}

void printStack() {
  struct Node* ptr = head;
  while (ptr) {
    printf("%d ", ptr->data);
    ptr = ptr->next;
  }
  printf("\n");
}

int main() {
  int choice = 0;

  while (1) {
    printf("\nMenu\n");
    printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
      case 1:
      int data = 0;
      printf("Enter element: ");
      scanf("%d", &data);
      push(data);
      printf("Element pushed\n");
      break;

      case 2:
      int ele = pop();
      printf("%d popped\n", ele);
      break;

      case 3:
      printStack();
      break;

      case 4:
      exit(0);

      default:
      printf("Invalid choice\n");
    }
  }
  
  return 0;
}