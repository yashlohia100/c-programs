#include <stdio.h>

const int MAX_SIZE = 20;
int stack[20];
int top = -1;

int isEmpty() {
  if (top == -1) {
    return 1;
  }
  return 0;
}

int isFull() {
  if (top == MAX_SIZE - 1) {
    return 1;
  }
  return 0;
}

void push(int data) {
  if (isFull()) {
    printf("Stack overflow...");
    return;
  }

  top++;
  stack[top] = data;
}

int pop() {
  if (isEmpty()) {
    printf("Stack underflow...");
    return -1;
  }

  int data = stack[top];
  top--;
  return data;
}

int peek() {
  if (isEmpty()) {
    printf("Stack is empty");
    return -1;
  }

  return stack[top];
}

void printStack() {
  for (int i = 0; i <= top; i++) {
    printf("%d ", stack[i]);
  }
  printf("\n");
}

int main() {
  push(11);
  push(12);
  push(13);
  printStack();
  printf("%d\n", peek());
  pop();
  printStack();
  return 0;
}