#include "task_6.h"

void fillSort(stack **top, int start, int end){
    
    for (int i = end; i >= start; i--){
        
        stack *node = malloc(sizeof(stack));
        
        if (node == NULL){
            printf("Out of memory!");
            return;
        }
        node->data = i;
        node->ptr = *top;
        *top = node;
    }
}

int* mergeStacks(stack *stack1, stack *stack2){

    int *result = NULL;
    int len = 0;
    
    while (stack1->ptr != NULL && stack2->ptr != NULL){

        len++;

        if(result == NULL){
            result = malloc(sizeof(int));
        }
        else{
            result = realloc(result, sizeof(int) * len);
        }

        if (stack1->data < stack2->data){
            result[len - 1] = stack1->data;
            stack1 = stack1->ptr;
        }
        else{
            result[len - 1] = stack2->data;
            stack2 = stack2->ptr;
        }
        
    }
    
    if (stack1->ptr == NULL){

        while (stack2 != NULL){

            len++;
            result = realloc(result, sizeof(int) * len);
            result[len - 1] = stack2->data;
            stack2 = stack2->ptr;
        }
    }
    
    else {

        while (stack1 != NULL){

            len++;
            result = realloc(result, sizeof(int) * len);
            result[len - 1] = stack1->data;
            stack1 = stack1->ptr;
        }

    }
    return result;
}

void display(stack *newptr){
    while(newptr != NULL){
        printf("%d\n", newptr->data);
        newptr = newptr->ptr;
    }
}