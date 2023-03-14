//#ifndef TASK_17_H
//#define TASK_17_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char string[50];
    struct node *next;
}node;

typedef struct stack
{
    node *start, *top;
}stack;

struct stack *stackInit();
void fillStackGetLengthPrint(stack *stack1);
void push(stack *stack1, char *string);

//#endif //TASK_17_H