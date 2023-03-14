#include "task_7.h"

Stack* init(){

    Stack *newStack = malloc(sizeof(Stack));
    newStack->top = NULL;
    newStack->start = NULL;
    
    return newStack;
}

void push(Stack* stack, char *data){

    Node *newNode = malloc(sizeof(Node));
    assert(newNode != NULL);

    newNode->data = data;
    newNode->next = NULL;

    if (stack->start == NULL){
        stack->start = newNode;
        stack->top = newNode;
        //stack->start->next = newNode;

        return;
    }

    stack->top->next = newNode;
    stack->top = newNode;
}

void pop(Stack* stack){

    if (stack->start == NULL){
        printf("Empty Stack\n");
        return;
    }

    Node *temp = stack->start;

    if (temp->next == NULL){

        stack->start = NULL;
        stack->top = NULL;
        return;
    }

    while(temp->next != stack->top){
        temp = temp->next;
    }

    temp->next = NULL;
    stack->top = temp;
}

void display(Stack *stack){

    if (stack->start == NULL){
        printf("Empty Stack\n");
        return;
    }

    Node *temp = stack->start;

    while(temp != NULL){
        printf("%s \n", temp->data);
        temp = temp->next;
    }
}

void searchWord(Stack* stack, char* word){
    
    while (stack->top){
        
        if (strcmp(stack->top->data, word) == 0){
            break;
        }
        pop(stack);
    }    

    if (stack->top == NULL){
        printf("No\n");
        return;
    }
    printf("Yes\n");
}