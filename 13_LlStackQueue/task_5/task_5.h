#ifndef TASK_5_H
#define TASK_5_H

typedef struct stack{
   int data;
   struct stack *ptr;
}Stack;

typedef Stack *stackPtr;

void push(stackPtr *top,int x);

int pop(stackPtr *top);

int checkEmpty(stackPtr top);

void printValue(stackPtr showPtr);

#endif