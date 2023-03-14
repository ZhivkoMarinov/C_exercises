#include "task_4.h"

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

void deletePos(Node **head, int pos){

    if (pos < 1){
        printf("Position must be greater than 0.");
        return;
    }

    Node *prev = NULL;
    Node *current = *head;

    if (pos == 1){
        current = current->next;
        *head = current;
        return;
    }

    for (int i = 0; i < pos - 1; i++){
        
        prev = current;
        
        if (current == NULL){
           printf("No position %d\n", pos);
           return;
        }
        current = current->next;        
    }

    prev->next = current->next;
}

void concatLists(Node **head1, Node **head2){
    Node *last1 = *head1;
    Node *last2 = *head2;

    while(last1->next != NULL){
        last1 = last1->next;
    }

    while(last2->next != NULL){
        last1->next = last2;
        last1 = last2;
        last2 = last2->next;
    }
}

void printList(struct Node *head){
    while (head != NULL){
        printf(" %d ", head->data);
        head = head->next;
    }
    printf("\n");
}