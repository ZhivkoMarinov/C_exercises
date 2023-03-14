/*
8. Даден е стек от произволни реални числа. Да се напише програма, която
изтрива от този стек всички отрицателни числа. 
*/

#include "task_8.h"
#include <stdio.h>
#include <stdlib.h>
stackPtr stacNewPtr = NULL;

int main ()
{
    char option;
    int value;
   
    push(&stacNewPtr, 4);
    push(&stacNewPtr, 3);
    push(&stacNewPtr, 7);
    push(&stacNewPtr, -2);
    
    
    if(stacNewPtr->data < 0){
        pop(&stacNewPtr);
    }
    printValue(stacNewPtr);
    
}
