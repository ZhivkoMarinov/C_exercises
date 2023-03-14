#include "task_5.h"
#include <stdio.h>
#include <stdlib.h>

void push(stackPtr *top,int x)
{
    stackPtr node;
    node = malloc(sizeof(Stack));
    if(node != NULL)
    {
        node -> data = x;
        node -> ptr = (*top);
        *top = node;
    }else{
        printf("ERROR!!");
    }
}
int pop(stackPtr *top)
{
    int value;
    stackPtr  tempPtr;
    tempPtr = *top;
    value = (*top)->data;
    *top = (*top)->ptr;
    free(tempPtr);
    return value;

}

void printValue(stackPtr showPtr)
{
    if (showPtr == NULL)
    {
        printf("no value");
    }else
    {
        printf("data save");
    }
    while (showPtr != NULL)
    {
        printf("\n%d-->", showPtr->data);
        showPtr = showPtr->ptr;
    }
    
    
}
int checkEmpty(stackPtr top)
{
    return top == NULL;
}