#include "task_1.h"

void createNode(List *node, int data){
    
    if (node == NULL){
        printf("Out of memory!");
        return;
    }

    node->data = data;
    node->next = NULL;
}

void insertFirst(List **start, List *node){

    node->next = *start;
    *start = node;
}

void displayList(List **start){

    List *temp = *start;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void splitList(List **start_base, List **start_even, List **start_odd){

    List *temp = malloc(sizeof(List));
    temp = *start_base;

    while(temp != NULL){

        List *node = malloc(sizeof(List));
        createNode(node, temp->data);

        if (temp->data % 2 == 0){
            insertFirst(start_even, node);
        }
        else{
            insertFirst(start_odd, node);
        }

        temp = temp->next;
    }
}