#include "task_12.h"

binary* createNode(int data){

    binary *newnode = malloc(sizeof(binary));

    newnode->data = data;
    newnode->ptr = NULL;

    return newnode;
}

void push(binary **top, int data){
    
    binary *newnode = createNode(data);
    
    if (newnode == NULL){
        printf("No memory!");
        return;
    }

    if (*top == NULL){        
        *top = newnode;
        return;
    }

    newnode->ptr = *top;
    *top = newnode;    
}

void pop(binary **top){

    if (*top == NULL){
        printf("Nothing to delete, stack is empty!");
        return;
    }

    binary *temp = *top;
    temp = temp->ptr;
    *top = temp;
}

void display(binary *front)
{
    binary *temp;
    if (front == NULL){
        printf("Empty Stack\n");
    }
    else {
        
        temp = front;
        printf("Elements in the Stack are: ");
        
        while(temp != NULL ){

            printf("%d ", temp -> data);
            temp = temp->ptr;
        }
        printf("\n");
    }
}

void toBinary(binary **top, int num){
    
    while(num){
        push (top, (num & 1));
        num >>= 1;
    }
}