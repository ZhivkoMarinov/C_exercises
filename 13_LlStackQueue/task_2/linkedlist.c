#include "task_2.h"

void push(Node **head, int data){
   
   Node *newnode = malloc(sizeof(Node));
   
   if (newnode == NULL){
       printf("Out of memory");
       return;
   }
   newnode->data = data;
   newnode->next = *head;
   *head = newnode;
}

void append(Node **head, int data){
    Node *newnode = malloc(sizeof(Node));
    Node *last = *head;
    
    if (newnode == NULL){
        printf("Out of memory");
        return;
    }
    
    newnode->data = data;
    newnode->next = NULL;
    
    if (*head == NULL){
        *head = newnode;
        return;
    }
    
    while(last->next != NULL){
        last = last->next;
    }
    last->next = newnode;
}

void insertBeforePos(Node **head, int data, int pos){
    Node *newnode = malloc(sizeof(Node));
    Node *prev = NULL;
    Node *current = *head;
    
    if (newnode == NULL){
        printf("Out of memory");
        return;
    }
    
    for (int i = 0; i < pos; i++){
        
        prev = current;
        
        if (current == NULL){
           printf("No position %d\n", pos);
           return;
        }
        current = current->next;
        
    }
    newnode->data = data;
    newnode->next = current;
    current = current->next;
    prev->next = newnode;

}

void printList(struct Node *node){
    while (node != NULL){
        printf(" %d ", node->data);
        node = node->next;
    }
    printf("\n");
}