#include <stdio.h>
#include <stdlib.h>

typedef struct stack{
   int data;
   struct stack *ptr; 
}stack;

void fillSort(stack **top, int start, int end);

int* mergeStacks(stack *stack1, stack *stack2);

void display(stack *newptr);