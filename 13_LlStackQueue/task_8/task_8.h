#ifndef TASK_8_H
#define TASK_8_H

typedef struct stack {
   int data;
   struct stack *ptr;
}Stack;

typedef Stack *stackPtr;

void push(stackPtr *top,int x);

int pop(stackPtr *top);

int checkEmpty(stackPtr top);

void printValue(stackPtr showPtr);

#endif